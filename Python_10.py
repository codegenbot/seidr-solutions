def make_palindrome(string: str) -> str:
    i = 0
    for i in range(len(string)):
        if string[i:] == string[i:][::-1]:
            break
    return string + string[:i][::-1]