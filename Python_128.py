```
def prod_signs(arr):
    if len(arr) == 0:
        return None
    product = 1
    for num in arr:
        if num < 0:
            product *= -1
        elif num > 0:
            product *= 1
    return sum(abs(num) for num in arr) * product