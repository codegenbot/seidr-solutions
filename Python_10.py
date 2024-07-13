def make_palindrome(string: str) -> str:
    if not is_palindrome(string):
        middle = len(string) // 2
        first_half = string[:middle]
        second_half = string[middle:][::-1]
        return first_half + second_half