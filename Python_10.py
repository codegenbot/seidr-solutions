Problem description: Write a Python function that checks if a given string is a palindrome and returns the original string if it's not a palindrome.

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