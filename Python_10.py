def make_palindrome(s: str) -> str:
    if len(s) % 2 == 0:
        return s[:len(s)//2] + s[:len(s)//2][::-1]
    else:
        mid = s[len(s)//2].upper()
        return s[0:len(s)//2] + s[0+len(s)//2][::-1] + mid