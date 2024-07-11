```
def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = sum(vector[:1])
    right_sum = total_sum - left_sum
    min_diff = abs(left_sum - right_sum)
    split_indices = [0, len(vector)-1]

    for i in range(1, len(vector)-1):
        current_left_sum = left_sum + vector[i]
        current_right_sum = right_sum - vector[i]
        if abs(current_left_sum - current_right_sum) < min_diff:
            min_diff = abs(current_left_sum - current_right_sum)
            split_indices = [i, i]
        elif abs(current_left_sum - current_right_sum) == min_diff:
            split_indices.append(i)

    return vector[:split_indices[0]+1], vector[split_indices[-1]:]