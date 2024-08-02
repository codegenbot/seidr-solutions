```
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string
    reversed_string = string[::-1]
    palindrome = ""
    for i in range(len(string)):
        palindrome += string[i] + (reversed_string[i] if i < len(reversed_string) else "")
    return palindrome