def is_palindrome(string: str) -> bool:
    string = string.replace(" ", "").lower()
    for i in range(len(string)):
        if string[i] != string[-1 - i]:
            return False
    return True


def make_palindrome(string: str) -> str:
    string = string.replace(" ", "").lower()
    reverse_string = string[::-1]
    middle_character = len(string) % 2
    new_string = ""
    for i in range(len(string)):
        if i < len(string) // 2:
            new_string += string[i]
        else:
            if middle_character == 0:
                new_string += string[i - 1]
            else:
                new_string += string[i]
            new_string += reverse_string[len(reverse_string) - i % (len(string) + 1)]
    return new_string