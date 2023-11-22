def is_palindrome(string: str) -> bool:
    return string == string[::-1] if string else True

def make_palindrome(string: str) -> str:
    suffix = ""
    for i in range(len(string), 0, -1):
        if is_palindrome(string[:i]) or is_palindrome(string[:i][::-1]):
            suffix = string[i-1:]
            break
    return string + suffix[::-1]