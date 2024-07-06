def smallest_change(arr):
    n = len(arr)
    arr_palindrome = arr.copy()

    left, right = 0, n - 1

    while left < right:
        if arr_palindrome[left] != arr_palindrome[right]:
            for i in range(n):
                if arr[i] == arr_palindrome[right]:
                    arr_palindrome[i], arr_palindrome[left] = (
                        arr_palindrome[left],
                        arr_palindrome[i],
                    )
                    break
            left += 1
        else:
            left, right = left + 1, right - 1

    return len(arr) - max(len(set(str(i)) for i in arr))