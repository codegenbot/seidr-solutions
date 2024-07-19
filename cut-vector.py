```
def cut_vector(vector):
    min_diff = float('inf')
    split_index = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i+1])
        right_sum = sum(vector[i:])

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

        if left_sum == right_sum or (left_sum > right_sum and left_sum - right_sum <= min_diff):
            return vector[:i+1], vector[i:]

    return vector[:split_index+1], vector[split_index:]