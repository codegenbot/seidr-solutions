```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if not string:
        return ""
    else:
        for i in range(len(string), 0, -1):
            middle = string[:i] + string[i-1:i]
            if is_palindrome(middle):
                return middle + middle[::-1]
        return string + string[::-1]