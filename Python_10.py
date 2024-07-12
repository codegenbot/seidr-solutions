Problem description: Determine if a given string is a palindrome and make it one if possible.

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