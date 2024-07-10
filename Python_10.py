```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    else:
        while True:
            new_string = string + string[-1] + string[::-1]
            if new_string == new_string[::-1]:
                return new_string
            string += string[-1]