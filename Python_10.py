Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    s = string.lower()
    i = len(s) - 1
    while i >= 0 and s[i] == s[0]:
        i -= 1
    palindromic_suffix = s[:i+1]
    remaining_prefix = s[i+1:]
    return palindromic_suffix + ''.join(reversed(remaining_prefix))