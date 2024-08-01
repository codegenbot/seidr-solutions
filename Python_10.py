Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        i = len(string) - 1
        while i > 0 and string[i] == string[0]:
            i -= 1
        return string + string[:i][::-1]
    else:
        i = len(string) - 1
        while i > 0 and string[i].lower() == string[0].lower():
            i -= 1
        if i < 0:
            return string + string[::-1]
        return string[:i+1] + string[i:].lower()[::-1].upper()