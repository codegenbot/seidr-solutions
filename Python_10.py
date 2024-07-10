def make_palindrome(string: str) -> str:
    if not string:
        return ""
    elif is_palindrome(string):
        return string
    else:
        for i in range(len(string)):
            reversed_half = string[i:][::-1]
            new_string = string[:i] + reversed_half + reversed_half
            if is_palindrome(new_string):
                return new_string
        return string + string[::-1]