```python
# This function takes a string as input and checks if it's a palindrome.
def is_palindrome(string: str) -> bool:
    return string == string[::-1]

# This function takes a string as input, checks if it's already a palindrome,
# and if not, returns a new string that is a palindrome by appending the reverse.
def make_palindrome(string: str) -> str:
    if string == string[::-1]:
        return string + string[::-1]
    for i in range(len(string)):
        postfix = string[i:]
        if postfix == postfix[::-1]:
            return string + postfix[::-1]