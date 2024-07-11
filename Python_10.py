Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.isalnum():
        i = len(string) - 1
        while i > 0 and string[i].lower() == string[0].lower():
            i -= 1
        prefix = string[:i+1]
        postfix = string[i:][::-1]
        return prefix + postfix