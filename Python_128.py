```
def prod_signs(arr):
    if not arr:
        return None
    sign = 1
    total = 0
    for num in arr:
        if num < 0:
            sign *= -1
        elif num > 0:
            total += abs(num)
        else:
            total += num
    return sign * total