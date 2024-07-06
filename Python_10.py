Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isPalindrome():
        return string + string[::-1][:-len(string)]
    else:
        return string + '#' + string[::-1]