```
def make_palindrome(string: str) -> str:
    if not string:
        return ""
    elif is_palindrome(string):
        return string
    else:
        for i in range(len(string), 0, -1):
            for j in range(len(string)):
                new_string = string[:j] + string[-i:]
                if is_palindrome(new_string):
                    return new_string