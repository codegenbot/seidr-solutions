def tri(n):
    def tribonacci(k):
        if k == 1:
            return 3
        elif k % 2 == 0:
            return 1 + k // 2
        else:
            return tribonacci(k - 1) + tribonacci(k - 2) + tribonacci(k + 1)

    return [tribonacci(i) for i in range(n + 1)]