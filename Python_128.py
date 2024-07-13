```
def prod_signs(arr):
    if not arr:
        return None
    signs = [1 if x > 0 else -1 if x < 0 else 0 for x in arr]
    total_sign = 1
    for sign in signs:
        total_sign *= sign
    return sum(abs(x) for x in arr) * total_sign