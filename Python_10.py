def is_palindrome(s: str) -> bool:
    return s == s[::-1]

def make_palindrome(string: str) -> str:
    if is_palindrome(string):
        return string
    n = len(string)
    palindrome_part = "#" * (len(string) // 2)
    new_string = palindrome_part + string[::-1] + palindrome_part
    while not is_palindrome(new_string):
        new_string = palindrome_part + new_string[-(n+1):][:-1] + palindrome_part
        n += 1
    return new_string[len(palindrome_part)*2 - 1:]