def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    suffix = ""
    for i in range(len(string)-1, -1, -1):
        if is_palindrome(string[i:]):
            suffix = string[i:]
            break
    return string + string[:len(string)-len(suffix)][::-1]