def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + "".join([string])  
    else:
        reverse_half = string[::-1]
        return "".join([reverse_half[:1], string, reverse_half[1:]])