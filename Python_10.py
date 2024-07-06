````
def is_palindrome(string: str) -> bool:
    return string == "".join(reversed(string))

def make_palindrome(string: str) -> str:
    if string == "".join(reversed(string)):
        return string + string
    return string + "".join(reversed(string))