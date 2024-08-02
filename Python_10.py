Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + 'a' * (len(string))
    for i in range(len(string)):
        if string[:i] + string[i:][::-1] == string:
            return string[:i] + string[i:][::-1]
    return string + 'a' * len(string)