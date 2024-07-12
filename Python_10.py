Problem description: Check if a given string is a palindrome and make it one.

function signature:
def is_palindrome_and_make(string: str) -> str:

Solution:
def is_palindrome_and_make(string: str) -> str:
    def is_palindrome(s: str) -> bool:
        return s == s[::-1]

    def make_palindrome(s: str) -> str:
        if not s.isalnum():
            return 'Error: Input contains non-alphanumeric characters.'
        for i in range(len(s), -1, -1):
            if s[:i].lower() == s[:i][::-1].lower():
                return s + s[:i][::-1]
        return s + s[::-1]

    if is_palindrome(string):
        return string
    else:
        return make_palindrome(string)