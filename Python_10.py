```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    new_string = ""
    for i in range(len(string)):
        new_string += string[i]
        new_string += string[len(string) - i - 1]
    return new_string