```
def cut_vector(vector):
    """
    Given a vector of positive integers, 
    find the spot where, if you cut the vector, 
    the numbers on both sides are either equal, 
    or the difference is as small as possible.
    Return the two resulting subvectors as two outputs.
    """
    if not isinstance(vector, list) or not all(isinstance(x, int) and x > 0 for x in vector):
        return "Invalid input"
    total_sum = sum(vector)
    min_diff = float('inf')
    left_sum = 0
    for i in range(1, len(vector)):
        left_sum += vector[i-1]
        right_sum = total_sum - left_sum
        
        diff = abs(left_sum - right_sum)
        if diff < min_diff:
            min_diff = diff
            cut_index = i

    return vector[:cut_index], vector[cut_index:]