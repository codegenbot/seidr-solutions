```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if not is_palindrome(string):
        for i in range(len(string), -1, -1):
            if string[:i].lower() == string[:i].lower()[::-1] and string[i:].lower() == string[i:].lower()[::-1]:
                return string[:i] + string[i:][::-1]
    return string + string[::-1]