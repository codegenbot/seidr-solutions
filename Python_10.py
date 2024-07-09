def is_palindrome(string: str) -> bool:
    return string == "".join(reversed(string))


def make_palindrome(string: str) -> str:
    reversed_string = string[::-1]
    if string == reversed_string:
        return string + reversed_string
    for i in range(len(string), -1, -1):
        if string[:i] == string[:i][::-1]:
            return string[:i][::-1] + string