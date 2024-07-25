def make_palindrome(string: str) -> str:
    i = 0
    while i < len(string) // 2 and string[:i + 1] == string[-i - 1:]:
        i += 1
    return string + string[i - 1::-1]