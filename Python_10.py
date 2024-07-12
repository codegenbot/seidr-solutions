def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string), 0, -1):
        for char in "abcdefghijklmnopqrstuvwxyz":
            new_string = string + char * (i - 1) + string
            if new_string == new_string[::-1]:
                return new_string