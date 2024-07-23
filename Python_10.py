```
def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome(string: str) -> str:
    for i in range(len(string)):
        postfix = string[i:]
        if is_palindrome(postfix):
            return postfix + string[:i][::-1]
    return string + string[::-1]