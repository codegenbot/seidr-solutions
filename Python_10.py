def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    half = len(string) // 2
    postfix = string[half:][::-1]
    return string[:half] + postfix