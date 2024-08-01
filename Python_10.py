Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string), 0, -1):
            postfix = string[i:]
            if is_palindrome(postfix):
                return string + postfix[::-1]
    else:
        for i in range(len(string), 0, -1):
            postfix = string[i:].lower()
            if is_palindrome(postfix):
                return string[:i].lower() + postfix[::-1].upper()