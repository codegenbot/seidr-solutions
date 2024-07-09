def prod_signs(arr):
    if not arr:
        return 0
    signs = [1 if x > 0 else -1 if x < 0 else 0 for x in arr]
    magnitude_sum = sum(abs(x) for x in arr)
    product_of_signs = 1
    for sign in signs:
        product_of_signs *= sign
    return product_of_signs * magnitude_sum