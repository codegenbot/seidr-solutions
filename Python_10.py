def make_palindrome(string: str) -> str:
    if not string:
        return ''
    for i in range(len(string)):
        if is_palindrome(string[i:]):
            return string + string[:i][::-1]
    return string  # this should not be reached if input is a string

print(make_palindrome('cat'))  # Expected 'catac'
print(make_palindrome('cata'))  # Expected 'catac'
print(make_palindrome(''))  # Expected ''