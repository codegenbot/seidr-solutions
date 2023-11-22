def make_palindrome(string: str) -> str:
    suffix = ""
    for i in range(len(string), 0, -1):
        if string[:i] == string[:i][::-1]:
            suffix = string[i:][::-1]
            break
    return string + suffix