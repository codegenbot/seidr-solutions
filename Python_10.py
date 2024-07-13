def make_palindrome(string: str) -> str:
    lower = string.lower()
    for i in range(len(lower), -1, -1):
        if lower == lower[:i][::-1]:
            if string[0].islower():
                return string + string[:i][::-1]
            elif string[0].isupper():
                return string[0].upper() + string[1 : i + 1].lower() + string[i:][::-1]