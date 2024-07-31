```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if len(string) <= 1:
        return string
    for i in range(len(string), -1, -1):
        if not is_palindrome(string[:i]):
            return string + string[i-1::-1]
    return string + string[::-1]