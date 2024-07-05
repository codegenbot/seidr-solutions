def reverse_delete(s, c):
    result = ''.join(char for char in s if char not in c)
    is_palindrome = result == result[::-1]
    return (result, is_palindrome)