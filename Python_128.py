```
def prod_signs(arr):
    if not arr:
        return None
    signs = 1
    total = 0
    for num in arr:
        if num < 0:
            signs *= -1
        elif num > 0:
            total += abs(num)
        else:
            total += abs(num)
    return signs * total