def make_palindrome(string: str) -> str:
    i = 0
    for i in range(len(string)):
        if is_palindrome(string[i:]):
            break
    return string + string[:i][::-1]