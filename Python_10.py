Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string), -1, -1):
        prefix = string[:i][::-1]
        postfix = string[i:][::-1]
        if string + prefix + postfix == (string + prefix + postfix)[::-1]:
            return string + prefix + postfix
    return None