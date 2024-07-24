```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        mid = len(string) // 2
        if string[:i] == string[i:][::-1]:
            return string[:mid] + string[i:][::-1] + string[i:]