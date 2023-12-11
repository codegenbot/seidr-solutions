def cut_vector(v):
    # Find the spot where the numbers on both sides are either equal or the difference is as small as possible
    min_diff = math.inf
    i = 0
    while i < len(v) - 1:
        diff = abs(v[i] - v[i + 1])
        if diff == 0:
            return [v[:i], v[i:]]
        elif diff < min_diff:
            min_diff = diff
            i += 1
    # If no spot is found, return a tuple of empty vectors
    return [], []