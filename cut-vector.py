def cut_vector(vector):
    # Find the spot where the difference between the numbers on both sides is as small as possible
    min_diff = float('inf')
    for i in range(1, len(vector)):
        diff = abs(vector[i] - vector[i-1])
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    # Return the two resulting subvectors as two outputs
    return vector[:cut_index], vector[cut_index:]