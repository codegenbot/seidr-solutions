def make_palindrome(string: str) -> str:
    cleaned_string = "".join(char for char in string if char.isalnum()).lower()
    half = cleaned_string + cleaned_string[::-1]
    return "#" + half.center(len(half) * 4, "#")[2:-2].upper() + "#"