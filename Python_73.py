def smallest_change(arr):
    # Given an array arr of integers, find the minimum number of elements that
    # need to be changed to make the array palindromic. A palindromic array is an array that
    # is read the same backwards and forwards. In one change, you can change one element to any other element.

    # For example:
    # smallest_change([1, 2, 3, 5, 4, 7, 9, 6]) == 4
    # smallest_change([1, 2, 3, 4, 3, 2, 2]) == 1
    # smallest_change([1, 2, 3, 2, 1]) == 0

    # First, check if the array is already a palindrome.
    if arr == arr[::-1]:
        return 0

    # If not, count the number of changes needed.
    changes = 0
    for i in range(int(len(arr) / 2)):
        if arr[i] != arr[len(arr) - 1 - i]:
            changes += 1 

    return changes


if __name__ == '__main__':
    print(smallest_change([1, 2, 3, 5, 4, 7, 9, 6]))
    print(smallest_change([1, 2, 3, 4, 3, 2, 2]))
    print(smallest_change([1, 2, 3, 2, 1]))
