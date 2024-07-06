
def make_palindrome(string):
    result = []
    for char in string:
        if char.isalnum():
            result.append(char)
    return "".join(reversed(result)) + string