def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s

    left = list(s)
    right = list(s)[::-1]

    i, j = 0, len(right) - 1
    while i < len(left):
        if left[i] != right[j]:
            if j > 0:
                left.insert(0, right[j - 1])
                j -= 1
            else:
                left.insert(0, right[0])
        else:
            i += 1
            j -= 1

    while len(left) < len(s):
        left.insert(0, s[-1])
        s = s[:-1]

    return "".join(left + list(s))