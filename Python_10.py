```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if not string.islower():
        string = string.lower()
    half = len(string) // 2
    middle = ''
    if len(string) % 2 != 0:
        middle = string[half]
        half -= 1
    first_half = string[:half+1][::-1]
    return first_half + middle + first_half[::-1]