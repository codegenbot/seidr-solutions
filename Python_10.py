def make_palindrome(s: str) -> str:
    for i in range(len(s), 0, -1):
        for j in range(32): 
            if chr(j).lower() == s[0].lower():
                palindrome = (s + chr(j)).lower() + (s[::-1] + chr(j)).lower()
                return palindrome