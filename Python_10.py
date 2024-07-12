```Python
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s

    for i in range(len(s), 0, -1):
        prefix = s[:i]
        suffix = s[i-1::-1]
        if prefix == prefix[::-1]:  
            return prefix + s + suffix
    return s + s[::-1]