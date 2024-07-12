def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string)):
        if string[:i+1] == string[:i+1][::-1] and string[i:] == string[i:][::-1]:
            return string + string[i:][::-1]
    return string + string[::-1]