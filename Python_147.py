def solution(n):
    count = 0
    max_sum = 0
    for k in range(1, n + 1):
        a = k * k - k + 1
        d = 2 * k - 1
        total = 0
        for i in range(k):
            total += a + (i * d)
        if total % 3 == 0:
            count += 1
            max_sum = max(max_sum, total)
    return count, max_sum