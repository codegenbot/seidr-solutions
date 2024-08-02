```
def triples_sum_to_zero(l: list):
    l = sorted(set(l))
    for i in range(len(l) - 2):
        left, right = i + 1, len(l) - 1
        while left < right:
            total = l[i] + l[left] + l[right]
            if total < 0:
                left += 1
            elif total > 0:
                right -= 1
            else:
                return True
    return False