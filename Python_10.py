```
def make_palindrome(string: str) -> str:
    if not string:
        return ""
    else:
        half = string[:len(string)//2]
        rest = string[len(string)//2:]
        return "".join([half[::-1], string, half])