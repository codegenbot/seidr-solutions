```
def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    new_string = "#" + "#".join(list(string)) + "#"
    palindrome = ""
    for i in range(n):
        while not is_palindrome(new_string):
            new_string = new_string[:i+1] + "#"
        if i < len(new_string) - 1:
            palindrome += new_string[i]
        new_string = new_string[1:]
    return palindrome