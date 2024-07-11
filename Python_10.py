def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string

    new_str = ""
    for i in range(len(string)):
        if i < len(string) - i - 1 and string[i:] == string[i:][::-1]:
            new_str += string[i]
        else:
            new_str += string[-i - 1]

    return new_str + new_str[::-1]