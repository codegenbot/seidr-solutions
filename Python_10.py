Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isnumeric():
        return string + ''.join(reversed(string))
    for i in range(len(string)):
        postfix = string[i:]
        if is_palindrome(postfix):
            prefix = string[:i]
            return prefix + ''.join(reversed(prefix)) + postfix