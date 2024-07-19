def prefixes(s):
    return [s[:i+1] for i in range(len(s)]

def suffixes(s):
    return [s[i:] for i in range(len(s))]

def substrings(s):
    return [s[i:j+1] for i in range(len(s)) for j in range(i, len(s))]

def is_palindrome(s):
    return s == s[::-1]