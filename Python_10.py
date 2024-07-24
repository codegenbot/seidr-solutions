Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.is_palindrome():
        return string + string[::-1]
    else:
        for i in range(len(string), -1, -1):
            if string[:i].is_palindrome():
                return string[:i] + string[i:][::-1]