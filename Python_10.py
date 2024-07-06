def make_palindrome(string: str) -> str:
    reversed_string = string[::-1]
    if string != reversed_string:
        middle_index = (len(string) + 1) // 2
        new_string = string[:middle_index] + reversed_string
    else:
        new_string = string + string
    return new_string