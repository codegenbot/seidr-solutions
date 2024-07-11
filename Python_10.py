def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string), 0, -1):
            if string[:i] == string[:i][::-1]:
                return string + string[:i][::-1]
    else:
        for i in range(len(string), 0, -1):
            prefix = string[:i].lower()
            suffix = prefix[::-1]
            if prefix == suffix:
                return string[0:i] + suffix.upper() + string[i:].lower()[::-1]