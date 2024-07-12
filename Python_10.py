```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    for i in range(len(string), 0, -1):
        char = string[0]
        new_string = (char * i) + string + (string[::-1])
        if new_string == new_string[::-1]:
            return new_string