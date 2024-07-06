def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        char = "*"
        new_string = string + char
        while is_palindrome(new_string):
            char += "*"
            new_string = string + char
        return new_string[: len(string) + 1]