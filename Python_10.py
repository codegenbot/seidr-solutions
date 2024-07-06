Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        prefix = ''
        for i in range(len(string)):
            if not is_palindrome(string[i:]):
                prefix += string[i]
                break
        return string + string[::-1][len(prefix):]
    else:
        string = string.lower()
        prefix = ''
        for i in range(len(string)):
            if not is_palindrome(string[i:]):
                prefix += string[i]
                break
        return (string + string[::-1][len(prefix):]).upper()