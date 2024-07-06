
def smallest_change(arr):
    # Initialize a variable to keep track of the minimum number of changes
    min_changes = float('inf')

    # Loop through each index in the array
    for i in range(len(arr)):
        # Check if the element at the current index is the same as the element at the opposite end of the array
        if arr[i] == arr[len(arr) - 1 - i]:
            # If they are the same, then we don't need to change this element
            continue

        # Otherwise, we need to change this element
        min_changes = min(min_changes, 1)

    return min_changes