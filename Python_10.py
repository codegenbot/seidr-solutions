```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s

    left = list(s)
    right = s[::-1]

    i, j = 0, len(right) - 1
    while i < len(left):
        if left[i] != right[j]:
            left.insert(0, right[j])
            j -= 1
        else:
            i += 1
            j -= 1

    return "".join(left)