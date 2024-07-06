def move_one_ball(arr):
    # Check if the input list is empty
    if not arr:
        return True

    # Initialize a variable to keep track of the number of right shifts
    shift = 0

    # Loop through the list and check if the elements are in non-decreasing order
    for i in range(len(arr) - 1):
        if arr[i] > arr[i + 1]:
            # If the elements are not in non-decreasing order, increment the shift variable
            shift += 1
        else:
            # If the elements are in non-decreasing order, reset the shift variable
            shift = 0

        # Check if the shift variable exceeds the length of the list
        if shift > len(arr):
            return False

    # If the loop completes and the shift variable is less than or equal to the length of the list, return True
    return shift <= len(arr)