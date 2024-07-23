def is_palindrome(input_string: str) -> bool:
    return input_string == input_string[::-1]


def make_palindrome(input_string: str) -> str:
    if is_palindrome(input_string):
        return input_string + input_string
    else:
        return input_string + input_string[::-1]