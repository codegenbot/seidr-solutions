```
def prod_signs(arr):
    if len(arr) == 0:
        return None
    signs = [x//abs(x) if x != 0 else 1 for x in arr]
    product_of_signs = 1
    for sign in signs:
        product_of_signs *= sign
    return sum(abs(x) for x in arr) * product_of_signs