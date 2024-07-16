Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    i = 0
    while i < len(string) and not (string[i:] + string[:i])[::-1] == string[i:] + string[:i]:
        i += 1
    return string[:i][::-1] + string[i:] + string[:i][::-1]