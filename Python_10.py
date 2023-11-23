def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    else:
        reversed_string = string[::-1]
        return string + reversed_string