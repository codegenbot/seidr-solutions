def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string)):
        if string[:i][::-1] + string[i:] == string[:i] + string[i:]:
            return string[:i][::-1] + string[i:]
    return string[::-1] + string