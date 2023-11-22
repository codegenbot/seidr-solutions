def make_palindrome(string: str) -> str:
    suffix = ""
    for i in range(len(string)-1, -1, -1):
        if is_palindrome(string[:i+1]):
            suffix = string[i:][::-1]
            break
    return string + suffix