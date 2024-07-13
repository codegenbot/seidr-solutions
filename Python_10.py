```
def make_palindrome(string: str) -> str:
    cleaned_string = "".join(char for char in string if char.isalnum()).lower()
    return "#{}#".format("".join(c + c for c in cleaned_string)).center(len(cleaned_string)*4, "#")[2:-2].upper()