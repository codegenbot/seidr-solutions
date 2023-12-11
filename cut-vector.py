def cut_vector(vec):
    n = len(vec)
    if n == 1:
        return vec[0], 0
    elif n == 2:
        return vec[0], vec[1]
    else:
        min_diff = float('inf')
        for i in range(1, n):
            diff = abs(vec[i] - vec[i-1])
            if diff < min_diff:
                min_diff = diff
                pos = i
        return vec[:pos], vec[pos:]