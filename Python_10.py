def is_palindrome(string: str) -> bool:
    string = string.replace(" ", "").lower()
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    string = string.replace(" ", "").lower()
    if string == string[::-1]:
        return string + string
    else:
        middle_char = len(string) // 2
        first_half = string[:middle_char]
        second_half = string[-1 : -middle_char - 1 : -1]
        return "".join([first_half, second_half])