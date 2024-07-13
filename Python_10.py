```
def make_palindrome(string: str) -> str:
    cleaned_string = "".join(char for char in string if char.isalnum()).lower()
    half = "".join(char for char in cleaned_string[:len(cleaned_string)] if char.isalnum())
    return "#{}#".format(half + half[::-1]).center(len(string)*4, "#")[2:-2].upper()