def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    else:
        if string[0] != string[-1]:
            return string[1:] + string[0] + string + string[-1]
        else:
            return string[:-1] + string[-2] + string + string[0]