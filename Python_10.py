def is_palindrome(string: str) -> bool:
    return string == string[::-1] if len(string) <= 1 else string[0] == string[-1] and is_palindrome(string[1:-1])

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string
    for i in range(len(string)):
        prefix = string[:i][::-1]
        postfix = string[i:]
        if is_palindrome(postfix):
            return prefix + postfix