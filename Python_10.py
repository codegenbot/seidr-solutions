Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if string.islower():
        half = 0
        while half < len(string) and string[half] == string[-half - 1]:
            half += 1
        return string + string[:len(string) - half].[::-1]
    else:
        s = ''.join(e for e in string if e.isalnum())
        half = 0
        while half < len(s) and s[half] == s[-half - 1]:
            half += 1
        return s + s[:len(s) - half].[::-1] + ''.join(e for e in string if not e.isalnum() and e != ' ')