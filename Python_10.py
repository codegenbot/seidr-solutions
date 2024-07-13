def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    else:
        new_string = ""
        for i in range(len(string)):
            new_string += string[i]
            if i != len(string) - i - 1:
                new_string += string[len(string) - i - 1]
        return new_string