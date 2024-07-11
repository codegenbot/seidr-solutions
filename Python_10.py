```Python
def make_palindrome(s: str) -> str:
    s = s.lower()
    if s == s[::-1]:
        return s

    result = list(s)
    mid = len(result) // 2

    for i in range(len(result) - 1, mid, -1):
        while result[0] != result[i]:
            if result[0] < result[i]:
                result.append(result.pop(0))
            else:
                result.insert(0, result.pop())

    return "".join(result)