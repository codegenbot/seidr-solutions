def smallest_change(arr):
    # Initialize a variable to keep track of the minimum number of changes
    min_changes = float('inf')

    # Loop through the array and check if it is palindromic
    for i in range(len(arr)):
        # Check if the first half of the array matches the second half
        if arr[:i] == arr[len(arr)-i:]:
            # If it does, update the minimum number of changes
            min_changes = min(min_changes, i)

    # Return the minimum number of changes
    return min_changes