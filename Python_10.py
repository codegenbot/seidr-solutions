```
def make_palindrome(string: str) -> str:
    for i in range(len(string)):
        postfix = string[i:]
        if postfix == postfix[::-1]:
            return string + postfix[::-1]
    return string + string[::-1]