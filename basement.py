def get_negative_sum(vector):
    # Initialize variables
    current_sum = 0
    index = 0
    
    # Iterate through the vector
    for i in range(len(vector)):
        # Update the current sum
        current_sum += vector[i]
        
        # Check if the current sum is negative
        if current_sum < 0:
            # If it is, return the index
            return index
        
        # Increment the index
        index += 1
    
    # If no negative sum was found, return -1
    return -1