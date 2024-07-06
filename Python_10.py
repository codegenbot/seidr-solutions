```
def is_palindrome(string: str) -> bool:
"""Test if given string is a palindrome"""
    return string == string[::-1]

def make_palindrome(string: str) -> str:
"""Make the input string into a palindrome by inserting characters at the beginning and end of the string"""
    reversed_string = string[::-1]
    for i in range(len(string), -1, -1):
        if string[:i] + reversed_string[i:] == (string + reversed_string)[::-1]:
            return string + reversed_string
    return string + reversed_string