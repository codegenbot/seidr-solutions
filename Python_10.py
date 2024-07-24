Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        prefix = string[:i]
        postfix = string[i:]
        if postfix == postfix[::-1]:
            return prefix + postfix + postfix[::-1]