def make_palindrome(s: str) -> str:
    for i in range(len(s)):
        new_s = s[:i] + s[i].lower() + s[i].upper() + s[i+1:]
        new_s += s[i].lower()
        new_s += new_s[::-1]
        if new_s == new_s[::-1]:
            return new_s