
def smallest_change(arr):
    # Initialize a variable to keep track of the minimum number of changes
    min_changes = len(arr)
    
    # Loop through the array and compare each element with its reverse counterpart
    for i in range(len(arr) // 2):
        # If the elements are not equal, increment the minimum number of changes
        if arr[i] != arr[-i-1]:
            min_changes += 1
    
    return min_changes