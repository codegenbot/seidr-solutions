def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    mid = len(string) // 2
    first_half = string[:mid]
    second_half = "".join(reversed(string[mid:]))
    return first_half + second_half + first_half