```
def reverse_delete(s, c):
    # delete all characters in s that are also in c
    result = ''.join([char for char in s if char not in c])

    # check if the result string is a palindrome
    return (result, result == result[::-1])
```