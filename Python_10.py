```
def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s + s

    result = []
    for i in range(len(s)):
        result.append(s[i])
        if i < len(s) - i - 1 and s[:i+1] == s[:i+1][::-1]:
            for j in range(i, -1, -1):
                result.append(s[j])
        else:
            for j in range(len(s)-i-1, -1, -1):
                result.append(s[j])

    return "".join(result)