```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        for i in range(len(string)):
            modified_string = string[:i] + '*' + string[i:]
            if modified_string != modified_string[::-1]:
                return modified_string
    return None