def make_palindrome(s: str) -> str:
    for i in range(len(s)):
        for j in range(i+1):
            new_s = s[:j] + s[i] + s[i:j:-1] + s[i:]
            if new_s == new_s[::-1]:
                return new_s