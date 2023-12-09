```
def reverse_delete(s, c):
    # delete all characters in s that are equal to any character in c
    result = ''.join([ch for ch in s if ch not in c])

    # check if the result string is palindrome
    return (result, result == result[::-1])
```
The code should work correctly now. Let me know if you have any other questions!