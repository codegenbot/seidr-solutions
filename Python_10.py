```
def is_palindrome(string: str) -> bool:
    """ Test if given string is a palindrome """
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        i = len(string) - 1
        while i > 0 and string[i] == string[0]:
            i -= 1
        return string + string[:i][::-1]
    else:
        prefix = ''
        for char in string:
            if char.isalpha() and char.lower() != string[0].lower():
                break
            prefix += char
        suffix = string[::-1]
        return prefix + suffix[len(prefix) % len(suffix):]