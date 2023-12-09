def smallest_change(arr):
    # Initialize a variable to keep track of the minimum number of changes
    min_changes = float('inf')

    # Iterate through the array and check if it is palindromic
    for i in range(len(arr)):
        # Check if the array is palindromic
        if arr[i] == arr[-i-1]:
            # If it is, update the minimum number of changes
            min_changes = 0
        else:
            # If it's not, increment the minimum number of changes
            min_changes += 1

    return min_changes