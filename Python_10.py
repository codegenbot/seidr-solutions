def make_palindrome(string: str) -> str:
    for i in range(len(string)):
        if string[:i+1] == string[:i+1][::-1]:
            return string + string[::-1][i:]
    return string + string[::-1]