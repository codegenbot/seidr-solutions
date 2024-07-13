```
def prod_signs(arr):
    if not arr:
        return None
    sign = 1
    for num in arr:
        if num < 0:
            sign *= -1
        elif num > 0:
            pass
    return sum(abs(num) for num in arr) * sign