def is_palindrome(string: str) -> bool:
    return string == string[::-1]


def make_palindrome(string: str) -> str:
    if not string.islower():
        string = string.lower()
    s = list(string)
    left, right = 0, len(s) - 1
    while left < right:
        if s[left] != s[right]:
            s.insert(len(s), s.pop(right))
            if s[left] != s[len(s) - 1]:
                s.insert(0, s.pop(left))
        else:
            left += 1
            right -= 1
    return "".join(s)