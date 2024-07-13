```
def make_palindrome(string: str) -> str:
    for i in range(len(string), 0, -1):
        substring = string[:i]
        if substring == substring[::-1]:
            return string + substring[::-1] + string[i:]