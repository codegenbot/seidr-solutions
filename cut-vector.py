def cut_vector(vec):
    if len(vec) == 1:
        return vec[0], 0
    
    min_diff = float("inf")
    spot = -1
    
    for i in range(len(vec)):
        diff = abs(sum(vec[:i]) - sum(vec[i:]))
        if diff < min_diff:
            min_diff = diff
            spot = i
    
    return vec[:spot], vec[spot:]