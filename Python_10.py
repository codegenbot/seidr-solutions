Problem description: Write a Python function that checks if a given string is a palindrome and another function to make the input string into a palindrome.

function signature:
def is_palindrome(string: str) -> bool:
def make_palindrome(string: str) -> str:

Solution:
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isalnum():
        for i in range(len(string), -1, -1):
            if string[:i].lower() == string[:i][::-1].lower():
                return string + string[:i][::-1]
        return string + string[::-1]
    else:
        return 'Error: Input contains non-alphanumeric characters.'