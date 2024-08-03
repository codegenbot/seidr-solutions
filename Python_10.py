def is_palindrome(s):
    return s == s[::-1]

def make_palindrome(s):
    if s == s[::-1]:
        return s + s[::-1]
    for i in range(len(s), 0, -1):
        if s[:i] == s[:i][::-1]:
            return s[:i] + s[i:][::-1] + s[:i][::-1]