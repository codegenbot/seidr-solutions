def is_palindrome(string: str) -> bool:
    return string == "".join(reversed(string))

def make_palindrome(string: str) -> str:
    for i in range(len(string), 0, -1):
        if string[:i] == "".join(reversed(string[:i])):
            return string[:i] + "".join(reversed(string[i:]))