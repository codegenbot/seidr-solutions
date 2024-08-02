def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.ispalindrome():
        return string + string[::-1]
    else:
        i = 0
        while not string[i:].ispalindrome() and i < len(string):
            i += 1
        return string[:i] + string[i:][::-1] + string[i:]