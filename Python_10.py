def make_palindrome(s):
    result = ""
    i = len(s) - 1
    while i >= 0:
        result += s[i]
        i -= 1
    return result + "".join(reversed(s)) + result