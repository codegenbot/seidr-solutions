Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        i = len(string) - 1
        while i >= 0 and string[i] == string[0]:
            i -= 1
        return string + string[:i][::-1]
    else:
        s = ''.join(c for c in string if c.isalnum())
        i = len(s) - 1
        while i >= 0 and s[i].lower() == s[0].lower():
            i -= 1
        return s + s[:i][::-1] + ''.join(c for c in string if not c.isalnum())