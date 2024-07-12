def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string
    for i in range(len(string), 0, -1):
        char = "abcdefghijklmnopqrstuvwxyz"[i-1]
        new_string = string + char + string[::-1]
        if new_string == new_string[::-1]:
            return new_string