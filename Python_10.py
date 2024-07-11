Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string), -1, -1):
            if not string[:i].endswith(('',)+string[i:][::-1]):
                return string + ''.join(reversed(string[i:]))
        return string + ''.join(reversed(string))
    else:
        s = string.lower()
        for i in range(len(s), -1, -1):
            if not s[:i].endswith(('',)+s[i:].lower()[::-1]):
                return s[:i].upper() + ''.join(reversed(s[i:].lower())) + ''.join(reversed(string[i:]))
        return string + ''.join(reversed(string))