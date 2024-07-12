Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string), 0, -1):
        suffix = string[i-1::-1]
        prefix = string[:i][::-1]
        if string + suffix + prefix == (string + suffix + prefix)[::-1]:
            return string + suffix + prefix