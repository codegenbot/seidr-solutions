def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if string.islower():
        for i in range(len(string), 0, -1):
            if is_palindrome(string + string[i - 1][::-1]):
                return string + string[i - 1][::-1]
    else:
        for i in range(len(string), 0, -1):
            if is_palindrome(
                string[0].lower() + string[1:i][::-1] + string[-1].upper()
            ):
                return string[0].lower() + string[1:i][::-1] + string[-1].upper()
    return string