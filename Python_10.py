Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.is_palindrome():
        return string + ''.join(reversed(string))
    else:
        for i in range(len(string)):
            prefix = string[:i]
            suffix = string[i:]
            if suffix == suffix[::-1]:
                return prefix + suffix + ''.join(reversed(prefix))