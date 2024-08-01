def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    else:
        half = len(string) // 2
        first_half = string[:half]
        second_half = string[half:][::-1]
        return first_half + second_half