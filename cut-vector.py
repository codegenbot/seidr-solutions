def cut_vector(vec):
    n = len(vec)
    if n == 1:
        return vec, []
    
    # initialize variables
    min_diff = float('inf')
    left = 0
    right = 0
    
    # loop through the vector and find the spot where the difference is minimum
    for i in range(1, n):
        diff = abs(vec[i] - vec[i-1])
        if diff < min_diff:
            min_diff = diff
            left = i-1
            right = i
    
    # return the two subvectors
    return vec[:left+1], vec[right:]