def is_palindrome(string: str) -> bool:
    """Returns True if the input string is a palindrome, False otherwise"""
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    """Makes the input string into a palindrome by adding its reverse to itself"""
    if string == string[::-1]:
        return string + string
    else:
        middle_char = len(string) // 2
        first_half = string[:middle_char]
        second_half = string[middle_char:][::-1]
        return first_half + second_half