```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    for i in range(len(string)):
        postfix = string[i:]
        if postfix.lower() == postfix.lower()[::-1]:
            return string + postfix[::-1]
    return string + string[::-1]