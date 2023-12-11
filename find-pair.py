
def find_pair(arr, target):
    # Initialize variables
    i = 0
    j = len(arr) - 1
    
    # Loop until the two elements that sum to the target are found or the pointers cross
    while i < j:
        # Calculate the sum of the current pair
        curr_sum = arr[i] + arr[j]
        
        # If the sum is equal to the target, return the indices
        if curr_sum == target:
            return (i, j)
        
        # If the sum is less than the target, increment i
        elif curr_sum < target:
            i += 1
        
        # If the sum is greater than the target, decrement j
        else:
            j -= 1
    
    # If no pair is found, return None
    return None