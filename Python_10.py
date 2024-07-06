def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower() and string == string[::-1]:
        return string
    for i in range(len(string), -1, -1):
        if not string[:i].islower() or string[:i] != string[:i][::-1]:
            break
    return string + string[i:][::-1]