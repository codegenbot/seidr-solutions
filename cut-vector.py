```
def cut_vector(vector):
    min_diff = float("inf")
    split_index = 0

    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])

        if left_sum == right_sum:
            return [vector[:i], vector[i:]]

        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i

    # Special case when the input vector is a palindrome
    if sum(vector) % 2 == 0 and len(vector) > 1:
        half_sum = sum(vector) // 2
        for i in range(len(vector)):
            if sum(vector[:i+1]) <= half_sum:
                return [vector[:i+1], vector[i:]]
    return [vector[:split_index], vector[split_index:]]