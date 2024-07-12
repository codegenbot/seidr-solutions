```
def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    half = ""
    for i in range((len(string) + 1) // 2):
        half += string[i]
    palindrome = half[::-1] + string + half[::-1]
    return palindrome