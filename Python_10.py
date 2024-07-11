def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s

    new_s = list(s)
    left, right = 0, len(new_s) - 1
    while left < right:
        if new_s[left] != new_s[right]:
            for i in range(len(new_s)):
                if new_s[i] == new_s[right]:
                    new_s.insert(0, new_s[i])
                    new_s.pop(right)
                    break
        left += 1
        right -= 1

    return "".join(new_s)