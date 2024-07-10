def findMinSteps(s):
    n = len(s)
    minSteps = float("inf")

    for i in range(n - 2 + 1):
        for j in range(i + 4, n):
            temp = s[:i] + s[i + 4 : j] + s[j:]

            if temp == s and j - i > minSteps:
                minSteps = j - i

    return max(0, minSteps)