Problem description: Write a Python function that takes a string as input and returns whether the string is a palindrome or not.

function signature:
def is_palindrome(string: str) -> bool:

Solution:
def is_palindrome(string: str) -> bool:
    return string == string[::-1]