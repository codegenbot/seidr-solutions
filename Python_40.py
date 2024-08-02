```
def triples_sum_to_zero(l: list):
    l = sorted(set(l))
    for i in range(len(l)-2):
        left, right = i+1, len(l)-1
        while left < right:
            current_sum = l[left] + l[right] + l[i]
            if current_sum == 0:
                return True
            elif current_sum < 0:
                left += 1
            else:
                right -= 1
    return False