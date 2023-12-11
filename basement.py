def get_negative_index(arr):
    # Initialize variables to keep track of the running sum and index
    running_sum = 0
    i = 0
    
    # Loop through the array until we find a negative sum
    while running_sum >= 0:
        running_sum += arr[i]
        i += 1
    
    # Return the first index where the sum is negative
    return i - 1