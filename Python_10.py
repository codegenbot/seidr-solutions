```
def make_palindrome(s: str) -> str:
    mid = len(s) // 2
    if len(s) % 2 == 0:
        return s[:mid].lower() + s[mid].upper() + s[mid+1::-1].lower()
    else:
        return s[:mid+1].lower() + s[mid].upper() + s[mid+1:].lower()[::-1]