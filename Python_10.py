def make_palindrome(string: str) -> str:
    reverse = string[::-1]
    new_string = ""
    for i in range(len(string)):
        new_string += string[i] + reverse[len(reverse) - 1 - i]
    return new_string