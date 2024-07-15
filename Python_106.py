def f(n):
    def helper(i):
        if i == 1:
            return 1
        elif i % 2 != 0:
            return i * helper(i - 1)
        elif i == 2:
            return i + helper(i - 2)
        else:
            return i + helper(i - 1)

    return [helper(i) for i in range(1, n + 1)]