import numpy as np

def cut_vector(vector):
    # Calculate the sum of all elements in the vector
    total_sum = sum(vector)
    
    # Initialize the difference as infinity
    min_diff = float('inf')
    # Initialize the cut index as -1
    cut_index = -1
    
    # Iterate through each index of the vector
    for i in range(len(vector)):
        # Calculate the sum of elements on the left side of the cut
        left_sum = sum(vector[:i+1])
        # Calculate the sum of elements on the right side of the cut
        right_sum = total_sum - left_sum
        
        # Calculate the absolute difference between the sums
        diff = abs(left_sum - right_sum)
        
        # Update the minimum difference and cut index if necessary
        if diff < min_diff:
            min_diff = diff
            cut_index = i
    
    # Return the two subvectors
    return vector[:cut_index+1], vector[cut_index+1:]