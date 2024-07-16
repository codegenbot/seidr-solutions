def make_palindrome(string: str) -> str:
    if string == "":
        return ""
    for i in range(len(string), 0, -1):
        if string[:i] == string[:i][::-1]:
            return string + string[: i - 1][::-1]