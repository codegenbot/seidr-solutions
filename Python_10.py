def make_palindrome(string: str) -> str:
    i = len(string) - 1
    while i >= 0 and string[: i + 1] != string[: i + 1][::-1]:
        i -= 1
    return string if i == len(string) - 1 else string + string[i + 1 :][::-1]