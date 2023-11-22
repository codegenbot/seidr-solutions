def make_palindrome(string: str) -> str:
    suffix = ""
    for i in range(len(string), 0, -1):
        if string[:i] == string[:i][::-1]:
            suffix = string[i:]
            break
    if string == string[::-1]:
        return string
    else:
        return string + suffix[::-1]