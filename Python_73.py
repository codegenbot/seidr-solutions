def smallest_change(arr):
    # Initialize a variable to keep track of the minimum number of changes
    min_changes = len(arr)

    # Loop through the array and check if each element is the same as its reverse counterpart
    for i in range(len(arr)):
        # If the element is not the same as its reverse counterpart, increment the minimum number of changes
        if arr[i] != arr[-1 - i]:
            min_changes += 1

    return min_changes