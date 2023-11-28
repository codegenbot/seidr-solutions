def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == '':
        return ''
    elif is_palindrome(string):
        return string
    else:
        for i in range(len(string) - 1, -1, -1):
            if is_palindrome(string[i:]):
                return string + string[:i][::-1]