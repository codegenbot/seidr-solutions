def make_palindrome(string: str) -> str:
    cleaned_string = "".join(char for char in string if char.isalnum()).lower()
    half = (len(cleaned_string) + 1)//2
    result = "#" + cleaned_string[:half] * 2 + "#"
    return result.upper()