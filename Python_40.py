def triples_sum_to_zero(l: list):
    l.sort()
    n = len(l)
    for i in range(n - 2):
        if i > 0 and l[i] == l[i - 1]:
            continue
        left, right = i + 1, n - 1
        while left < right:
            total = l[i] + l[left] + l[right]
            if total == 0:
                return True
            elif total < 0:
                left += 1
            else:
                right -= 1
    return False