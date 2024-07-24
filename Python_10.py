def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    if len(string) % 2 == 0:
        half = len(string) // 2
        left_half = string[:half]
        right_half = string[half:][::-1]
        return left_half + right_half
    else:
        half = (len(string) - 1) // 2
        left_half = string[: half + 1]
        right_half = string[half:-1][::-1]
        if len(left_half) < len(right_half):
            return left_half + left_half[::-1] + right_half
        return left_half + right_half