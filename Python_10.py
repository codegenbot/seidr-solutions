```
def make_palindrome(string: str) -> str:
    if len(string) == 1 or is_palindrome(string):
        return string
    for i in range(len(string)):
        if is_palindrome(string[i:]):
            return string + string[i:][::-1]
    return string