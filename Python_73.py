def smallest_change(arr):
    # Initialize a variable to keep track of the minimum number of changes
    min_changes = float('inf')

    # Loop through each element in the array
    for i in range(len(arr)):
        # Check if the current element is equal to the element at the opposite end of the array
        if arr[i] == arr[-i-1]:
            # If they are equal, then we don't need to change this element
            continue
        else:
            # Otherwise, we need to change this element
            min_changes = 1
            break

    return min_changes