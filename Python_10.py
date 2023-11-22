def make_palindrome(string: str) -> str:
    suffix = ""
    for i in range(len(string), 0, -1):
        if is_palindrome(string[:i]):
            suffix = string[i:]
            break
    return string + suffix[::-1]