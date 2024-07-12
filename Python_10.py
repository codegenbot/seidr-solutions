```Python
def is_palindrome(s: str) -> bool:
    s = ''.join(e for e in s if e.isalnum()).lower()
    return s == s[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    new_string = ""
    while not is_palindrome(new_string + ''.join(e for e in string if e.isalnum()).lower() + new_string):
        new_string += ''.join(e for e in string if e.isalnum())[0].lower()
    return new_string + ''.join(e for e in string if e.isalnum()).lower() + new_string