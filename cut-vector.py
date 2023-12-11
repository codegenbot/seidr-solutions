def cut_vector(vec):
    if len(vec) == 2:
        return vec[0], vec[1], 0
    
    mid = len(vec) // 2
    left = vec[:mid]
    right = vec[mid:]
    
    lsum = sum(left)
    rsum = sum(right)
    diff = abs(lsum - rsum)
    
    if diff == 0:
        return left, right, 0
    
    if lsum > rsum:
        return cut_vector(left) + (0,)
    else:
        return cut_vector(right) + (0,)
