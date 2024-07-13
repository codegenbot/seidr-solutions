```
def make_palindrome(string: str) -> str:
    cleaned_string = "".join(char for char in string if char.isalnum()).lower()
    half = cleaned_string[:len(cleaned_string)//2]
    return "#{}#".format(half + half[::-1]).center(len(cleaned_string)*4, '#')[2:-2].upper()