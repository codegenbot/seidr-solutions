
def smallest_change(arr):
    # Initialize variables to keep track of changes and palindrome status
    changes = 0
    is_palindrome = False

    # Loop through the array and check if it's a palindrome
    for i in range(len(arr)):
        # If the current element is not equal to the corresponding element from the end, increment changes
        if arr[i] != arr[-1-i]:
            changes += 1

    # If the number of changes is odd, it means that the array cannot be made palindromic
    if changes % 2 == 1:
        return -1

    # Otherwise, return the number of changes
    return changes // 2