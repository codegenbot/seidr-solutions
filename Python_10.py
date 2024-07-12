Problem description: Write a Python function that takes a string as input and checks if it is a palindrome. If the string is not a palindrome, modify it to become one.

function signature:
def make_palindrome(string: str) -> str:

Solution:
def make_palindrome(string: str) -> str:
    if string.isalnum():
        for i in range(len(string), -1, -1):
            if string[:i].lower() == string[:i][::-1].lower():
                return string + string[:i][::-1]
        return string + string[::-1]
    else:
        return 'Error: Input contains non-alphanumeric characters.'