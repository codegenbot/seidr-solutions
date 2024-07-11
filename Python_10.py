```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if not is_palindrome(string):
        for i in range(len(string)):
            postfix = string[i:]
            if is_palindrome(postfix):
                prefix = string[:i][::-1]
                return prefix + postfix
    return string + string[::-1]