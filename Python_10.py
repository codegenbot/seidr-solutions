```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if len(string) % 2 == 0:
        return string + string[::-1]
    else:
        return string[:len(string)//2] + string + string[:len(string)//2][::-1]