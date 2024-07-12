Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isPalindrome():
        return string + string[::-1]
    for i in range(len(string), 0, -1):
        if string[:i].isPalindrome() and string[i:].isPalindrome():
            return string[:i] + string[i:][::-1]
    return string + string[::-1]