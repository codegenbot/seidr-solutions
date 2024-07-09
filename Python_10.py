```
def is_palindrome(string: str) -> bool:
    return string.lower() == string.lower()[::-1]

def make_palindrome(string: str) -> str:
    if not string:
        return string
    if string == string[::-1]:
        return string + string
    else:
        reverse_half = string[::-1]
        middle_char = string[len(string)//2]
        return "".join([reverse_half[:len(middle_char)], middle_char, reverse_half[:len(middle_char)][::-1]])