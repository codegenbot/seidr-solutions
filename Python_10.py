def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    else:
        for i in range(len(string)):
            if string[i:] == string[i:][::-1]:
                return string + string[:i][::-1]