```
def triples_sum_to_zero(l: list) -> bool:
    l.sort()
    for i in range(len(l) - 2):
        left = i + 1
        right = len(l) - 1
        while left < right:
            current_sum = l[i] + l[left] + l[right]
            if current_sum > 0:
                right -= 1
            elif current_sum < 0:
                left += 1
            else:
                return True
    return False