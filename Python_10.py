Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string)):
            if string[:i].lower() == string[:i][::-1].lower():
                return string + string[i:][::-1]
    else:
        for i in range(len(string)):
            if string[:i].lower() == string[:i][::-1].lower():
                return string[:i].lower() + string[i:].lower()[::-1].upper()
    return string + string[::-1]