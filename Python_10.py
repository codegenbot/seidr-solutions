```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string

    for i in range(len(string)):
        if len(string[i:]) < 2 or is_palindrome(string[i:] + string[:i][::-1]):
            half = string[:i+1]
            second_half = string[i:][::-1] + half
            return second_half