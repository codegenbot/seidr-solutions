````
def is_palindrome(string: str) -> bool:
    """Check if a string is palindrome"""
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    """Make a string into palindrome by adding reversed version at the end"""
    if string == string[::-1]:
        return string + string
    else:
        return string + string[::-1]