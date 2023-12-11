import numpy as np

def cut_vector(vec):
    """
    Find the spot where, if you cut the vector, the numbers on both sides are either equal, or the difference is as small as possible.
    Return the two resulting subvectors as two outputs.
    """
    # Initialize variables
    n = len(vec)
    diff = np.inf
    spot = -1
    
    # Iterate over all possible cuts
    for i in range(n):
        # Calculate the difference between the left and right sides of the cut
        d = abs(sum(vec[:i]) - sum(vec[i:]))
        
        # If the difference is smaller than previous cuts, update the minimum difference and spot
        if d < diff:
            diff = d
            spot = i
    
    # Return the two resulting subvectors as outputs
    return vec[:spot], vec[spot:]