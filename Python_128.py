```
def prod_signs(arr):
    if not arr:
        return None
    signs = [1 if x > 0 else -1 if x < 0 else 0 for x in arr]
    sign_product = 1
    for sign in signs:
        sign_product *= sign
    total = sum(abs(x) for x in arr)
    return total * sign_product