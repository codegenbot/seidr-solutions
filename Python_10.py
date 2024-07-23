```
def make_palindrome(s: str) -> str:
    s = s.lower()
    left_half = s[:len(s)//2]
    right_half = s[len(s)//2:]
    return (left_half + right_half[::-1]).capitalize() + (left_half[::-1] if len(left_half) > 1 else '')