```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if len(vector[:i]) > len(vector[i:]) and not (left_sum == right_sum):
            diff = abs(left_sum / len(vector[:i]) - right_sum / len(vector[i:]))
        elif len(vector[i:]) > len(vector[:i]) and not (right_sum == left_sum):
            diff = abs(right_sum / len(vector[i:]) - left_sum / len(vector[:i]))
        else:
            if abs(left_sum - right_sum) < min_diff:
                min_diff = abs(left_sum - right_sum)
                split_index = i

    return vector[:split_index], vector[split_index:]