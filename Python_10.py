def make_palindrome(s: str) -> str:
    if s == s[::-1]:
        return s

    result = list(s)

    mid = len(result) // 2
    for i in range(len(result) - 1, mid, -1):
        while result[0] != result[i]:
            result.insert(0, result.pop())

    if len(s) % 2 == 1:
        result.insert(mid, result.pop(0))

    return "".join(result)