def get_negative_index(arr):
    # Initialize variables
    current_sum = 0
    index = -1
    
    # Iterate over the array
    for i in range(len(arr)):
        # Update the current sum
        current_sum += arr[i]
        
        # Check if the current sum is negative
        if current_sum < 0:
            # If it is, update the index
            index = i
            break
    
    return index