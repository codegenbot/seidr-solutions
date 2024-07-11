Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + '#' * (len(string))
    for i in range(len(string), 0, -1):
        prefix = string[:i]
        suffix = string[i:]
        if is_palindrome(prefix + suffix):
            return prefix + '#' * len(suffix) + ''.join(reversed(prefix))