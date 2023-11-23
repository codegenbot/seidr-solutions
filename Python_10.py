def make_palindrome(string: str) -> str:
    suffix = ""
    for i in range(len(string)-1, -1, -1):
        if is_palindrome(string[i:]):
            suffix = string[i:]
            break
    prefix = string[:i][::-1]
    return string + prefix + suffix