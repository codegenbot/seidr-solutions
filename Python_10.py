def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string)):
            if is_palindrome(string[i:] + string[:i][::-1]):
                return string[i:] + string[:i][::-1]
    else:
        for i in range(len(string)):
            if is_palindrome(string[i:].lower() + (string[:i].lower())[::-1]):
                return (string[i:].lower() + (string[:i].lower())[::-1]).upper()