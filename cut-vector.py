def cut_vector(vector):
    total_sum = sum(vector)
    left_sum = vector[0]
    right_sum = total_sum - left_sum
    min_diff = float("inf")
    split_indices = [0]

    for i in range(1, len(vector)):
        new_left_sum = left_sum + vector[i]
        new_right_sum = right_sum - vector[i]
        
        if abs(new_left_sum - new_right_sum) < min_diff:
            min_diff = abs(new_left_sum - new_right_sum)
            split_indices = [i]
        elif abs(new_left_sum - new_right_sum) == min_diff:
            split_indices.append(i)

    return vector[:split_indices[0]], vector[split_indices[-1]:]