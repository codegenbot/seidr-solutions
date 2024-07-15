```
def prod_signs(arr):
    if not arr:
        return None
    product_of_signs = 1
    for num in arr:
        if num < 0:
            product_of_signs *= -1
        elif num > 0:
            continue
    return sum(abs(num) for num in arr) * product_of_signs