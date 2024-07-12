def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    for i in range(len(string), 0, -1):
        if is_palindrome(string[:i]):
            half = string[:i]
            second_half = string[i:]
            return half + second_half[::-1]
    return "No palindrome found"