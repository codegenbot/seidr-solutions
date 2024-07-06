def make_palindrome(string: str) -> str:
    reverse = string[::-1]
    new_string = string + reverse
    if len(string) % 2 != 0:
        middle_index = len(string) // 2
        return string[:middle_index] + string[middle_index] * 2 + string[:middle_index][::-1]
    return new_string