```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]  

    center = len(string) // 2
    middle_char = string[center]
    first_half = string[:center]
    second_half = string[center][::-1]

    return first_half + middle_char + second_half