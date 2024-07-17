def cut_vector(vector):
    left = right = 0
    min_diff = float("inf")
    for i in range(1, len(vector)):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff <= min_diff:
            min_diff = diff
            left = i - 1
            right = i
    return (vector[: left + 1], vector[left + 1 :])