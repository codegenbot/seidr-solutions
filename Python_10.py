```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isupper():
        return string + string[::-1].upper()
    elif string.islower():
        return string + string[::-1]
    else:
        prefix = ''
        for char in string:
            if not char.isalnum():
                break
            prefix += char
        postfix = prefix[::-1]
        if postfix == prefix:
            return string + postfix
        else:
            return string + postfix + ''.join(c for c in string[::-1].lower() if c.isalnum())