def cut_vector(vector):
    min_diff = float("inf")
    split_index = -1
    for i in range(1, len(vector)):
        left_sum = sum(vector[:i])
        right_sum = sum(vector[i:])
        if left_sum == right_sum:
            return (vector[:i], vector[i:])
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            split_index = i
    left = vector[:split_index]
    right = vector[split_index:]
    while len(right) > 1 and right[-1] == right[-2]:
        right.pop()
    return (left, right)