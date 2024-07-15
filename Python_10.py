def make_palindrome(string: str) -> str:
    for i in range(len(string), -1, -1):
        if string[:i] == string[:i][::-1]:
            return string + string[:i][::-1]

def is_palindrome(string: str) -> bool:
    return string == string[::-1]