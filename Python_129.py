def findMinStep(s):
    res = float("inf")
    for k in range(len(s)):
        if all(c1 == c2 for c1, c2 in zip(s[k:], s)):
            res = min(res, k)
    return -1 if res == float("inf") else res