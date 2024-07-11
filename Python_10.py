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
                    for k in range(i + 1):
                        if s[k] == c:
                            i, j = k, len(s) - 1
                            break
                    for k in range(j, -1, -1):
                        if s[k] == c:
                            i, j = 0, k
                            break
        else:
            i += 1
            j -= 1
    return ''.join(s)