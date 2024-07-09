```
def is_palindrome(string: str) -> bool:
    return string == "".join(reversed(string))

def make_palindrome(string: str) -> str:
    if string == "".join(reversed(string)):
        return string + "".join(reversed(string))
    for i in range(len(string), -1, -1):
        if string[:i] == string[:i][::-1]:
            return string[:i][::-1] + string