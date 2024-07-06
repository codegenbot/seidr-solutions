def solve(s):
    if s.isalpha():
        return "".join([chr(ord("A") + ord("Z") - ord(c)) for c in s])
    else:
        return s[::-1]