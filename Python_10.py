```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    else:
        for i in range(len(string), -1, -1):
            if string[:i].islower() and string[i:].islower():
                return string[:i] + string[i:][::-1]
        return string + string[::-1]