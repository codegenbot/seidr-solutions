def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string + string[::-1]
    else:
        for char in "abcdefghijklmnopqrstuvwxyz":
            if all(c not in string for c in char):
                string += char
                break
        while not is_palindrome(string):
            string = string[:-1]
        return string