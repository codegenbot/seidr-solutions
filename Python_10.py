def make_palindrome(string: str) -> str:
    cleaned_string = ''.join(char for char in string if char.isalnum()).lower()
    return cleaned_string + cleaned_string[::-1]