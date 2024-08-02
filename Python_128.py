def prod_signs(arr):
    if not arr:
        return None
    signs = [1 if x > 0 else -1 if x < 0 else 0 for x in arr]
    magnitude_sum = sum(abs(x) for x in arr)
    product_of_signs = 1 if signs[0] == 1 else -1 if signs[0] == -1 else 0
    for sign in signs[1:]:
        product_of_signs *= sign
    return product_of_signs * magnitude_sum