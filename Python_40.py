```
def triples_sum_to_zero(l: list):
    l.sort()
    for i in range(len(l) - 2):
        left, right = i + 1, len(l) - 1
        while left < right:
            total = l[i] + l[left] + l[right]
            if total == 0:
                return True
            elif total < 0:
                left += 1
            else:
                right -= 1
    return False