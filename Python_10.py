def make_palindrome(string: str) -> str:
    reverse = string[::-1]
    new_string = ""
    for i in range(len(string)):
        if i == len(string) // 2 and len(string) % 2 != 0:
            new_string += string[i]
        else:
            new_string += string[i] + reverse[len(reverse) - 1 - i]
    return new_string