def reverse_delete(s, c):
    # Delete all characters in s that are equal to any character in c
    result = ''
    for char in s:
        if char not in c:
            result += char
    # Check if the result string is palindrome
    return (result, result == result[::-1])