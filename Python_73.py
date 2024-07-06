def smallest_change(arr):
    """
    This function calculates the minimum number of operations required to make all elements in the array equal.
    The operation is either incrementing an element by one or decrementing it by one.

    Parameters:
    arr (list): A list of integers representing the array.

    Returns:
    int: The minimum number of operations required.
    """
    n = len(arr)
    if n <= 1:
        return 0
    left, right = 0, n - 1
    changes = 0

    while left < right:
        if arr[left] != arr[right]:
            if arr[0] == arr[left]:
                for i in range(left + 1, right + 1):
                    arr[i], arr[0] = arr[0], arr[i]
                left += 1
                changes += 1
            else:
                changes += 2
        else:
            left += 1
        right -= 1

    return changes


input_list = [0, 1, 0, 1, 1, 0]
print(smallest_change(input_list))