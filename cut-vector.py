def cut_vector(vector):
    min_diff = float('inf')
    spot = 0
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            spot = i
    yield vector[:spot], vector[spot:]