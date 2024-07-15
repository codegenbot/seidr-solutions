```
def prod_signs(arr):
    if not arr:
        return None
    sign = 1
    for num in arr:
        sign *= -1 if num < 0 else 1 if num == 0 else 1
    return sum(abs(num) for num in arr) * sign