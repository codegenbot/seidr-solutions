```
def make_palindrome(string: str) -> str:
    cleaned_string = "".join(char for char in string if char.isalnum()).lower()
    half = cleaned_string[:len(cleaned_string)//2]
    return ("".join([c*2 for c in half]) + "".join([c for c in half])[::-1]).center(len(cleaned_string) * 2, '#')[1:-1].replace('#', '').upper()