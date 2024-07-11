def make_palindrome(s: str) -> str:
    s = list(s)
    i, j = 0, len(s) - 1
    while i < j:
        if s[i] != s[j]:
            for c in set(s):
                left, right = 0, len(s) - 1
                while left < right and s[left] != c:
                    left += 1
                while left < right and s[right] != c:
                    right -= 1
                if left < right:
                    s.pop(left)
                    j -= 1
                    break
            else:
                s.pop(j)
        else:
            i += 1
            j -= 1
    return ''.join(s)