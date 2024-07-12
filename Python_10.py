Problem: Write two functions in Python that can be used to check if a given string is a palindrome and to create a new palindrome by inserting characters in the middle of an existing string.

Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string), -1, -1):
        if string[:i] + string[i:][::-1] == string:
            return string[:i] + string[i:][::-1]