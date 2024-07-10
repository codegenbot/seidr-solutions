def prod_signs(arr):
    if not arr:
        return None
    signs = [1 if x > 0 else -1 if x < 0 else 0 for x in arr]
    magnitude_sum = sum(abs(x) for x in arr)
    sign_product = reduce(lambda x, y: x * y, signs, 1)
    return magnitude_sum * sign_product