```
def make_palindrome(string: str) -> str:
    for i in range(len(string)):
        prefix = string[:i]
        postfix = string[i:]
        if is_palindrome(prefix + postfix[::-1]):
            return prefix + string[i] + postfix[::-1]
    return string + string[::-1]