```
def prod_signs(arr):
    if len(arr) == 0:
        return None
    signs = [num // abs(num) for num in arr]
    product_of_signs = 1
    for sign in signs:
        product_of_signs *= sign
    return sum(abs(num) for num in arr) * product_of_signs