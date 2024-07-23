```
def make_palindrome(string: str) -> str:
    for i in range(1, len(string)//2 + 1):
        if string[:i] == string[:i][::-1]:
            return string + string[i - 1 :][::-1].lower()