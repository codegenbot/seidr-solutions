Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        if string[i:] == string[i:]][::-1]:
            return string[:i] + string[i:][::-1]
    return string + string[::-1]