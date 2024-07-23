Here is the completed code:

def is_palindrome(string: str) -> bool:
    return string == string[::-1]

def make_palindrome(string: str) -> str:
    if len(string) <= 1:
        return string
    i = 0
    for j in range(len(string)-1, -1, -1):
        if string[i] != string[j]:
            break
        i += 1
    prefix = string[:i]
    suffix = string[i:][::-1]
    return prefix + suffix