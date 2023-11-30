def make_palindrome(string: str) -> str:
    suffix = ""
    for i in range(len(string)-1, -1, -1):
        if string[i:] == string[i:][::-1]:
            suffix = string[:i]
            break
    return string + suffix[::-1]