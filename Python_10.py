def make_palindrome(string: str) -> str:
    reverse = string[::-1]
    new_string = ""
    for i in range(len(string)):
        new_string += string[i] + (reverse[i] if i < len(reverse)/2 else "")
    return new_string + (reverse[len(reverse)//2:] if len(string)%2 != 0 else "")