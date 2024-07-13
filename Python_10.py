```
def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if not string.islower():
        string = string.lower()
    s = list(string)
    left, right = 0, len(s) - 1
    while left < right:
        if s[left] != s[right]:
            for i in range(len(s), 0, -1):
                if ''.join(s[:i]).lower() == ''.join(s[:i]).lower()[::-1]:
                    return string + ''.join(s[:i]).lower()[::-1]
            break
        left += 1
        right -= 1
    return ''.join(s)