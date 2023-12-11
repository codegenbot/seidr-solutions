def cut_vector(vector):
    # Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the difference is as small as possible.
    n = len(vector)
    min_diff = float("inf")
    for i in range(1, n):
        diff = abs(sum(vector[:i]) - sum(vector[i:]))
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    return vector[:cut_index], vector[cut_index:]