def make_palindrome(string: str) -> str:
    if string == '':
        return ''
    for i in range(len(string), 0, -1):
        if is_palindrome(string[:i]):
            return string + string[:i-1][::-1]