```
def make_palindrome(string: str) -> str:
    cleaned_string = "".join(char for char in string if char.isalnum()).lower()
    while cleaned_string != cleaned_string[::-1]:
        if len(cleaned_string) < len(cleaned_string[::-1]):
            cleaned_string = cleaned_string + cleaned_string[-1]
        else:
            cleaned_string = cleaned_string[:len(cleaned_string)-1]
    return cleaned_string + cleaned_string[::-1]