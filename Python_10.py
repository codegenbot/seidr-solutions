def make_palindrome(string: str) -> str:
    if not is_palindrome(string):
        for char in string:
            new_string = char + string + char
            if is_palindrome(new_string):
                return new_string
        return None