```Python
def make_palindrome(string: str) -> str:
    string = "".join(e for e in string.lower() if e.isalnum())
    for i in range(len(string), 0, -1):
        if string[:i] == string[:i][::-1]:
            return string + string[:i][::-1]
    return string + string[::-1]