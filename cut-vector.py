def cut_vector(v):
    left = 0
    min_diff = float("inf")
    min_left = 0
    for i in range(len(v)):
        right = len(v) - i - 1
        if v[i] == v[right]:
            return [v[:i], v[i:]]
        diff = abs(sum(v[:i]) - sum(v[i:]))
        if diff < min_diff:
            min_diff = diff
            min_left = i
    left = min_left
    right = len(v) - left - 1
    if left == 0 or right == len(v) - 1:
        return [v, []]
    return [v[:left], v[left:]]