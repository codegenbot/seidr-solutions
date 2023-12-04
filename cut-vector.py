def cut_vector(vector):
    n = len(vector)
    if n == 2:
        return vector[0], vector[1]
    elif n > 2:
        min_diff = math.inf
        for i in range(1, n):
            diff = abs(sum(vector[:i]) - sum(vector[i:]))
            if diff < min_diff:
                min_diff = diff
                cut = i
        return vector[:cut], vector[cut:]