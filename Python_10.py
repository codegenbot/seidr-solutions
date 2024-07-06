def make_palindrome(string: str) -> str:
    reverse = string[::-1]
    new_string = ""
    for i in range(len(string)):
        if len(string) % 2 == 0 or i < len(string) // 2:
            new_string += string[i]
        else:
            new_string += string[i] + reverse[len(reverse) - 1 - i]
    return new_string