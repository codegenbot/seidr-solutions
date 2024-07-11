Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        i = len(string) - 1
        while i > 0 and string[0] != string[i]:
            i -= 1
        palindrome = string[:i+1] + string[:i+1][::-1]
    else:
        string = string.lower()
        i = len(string) - 1
        while i > 0 and string[0] != string[i]:
            i -= 1
        palindrome = string[:i+1] + string[:i+1][::-1].upper()
    return palindrome