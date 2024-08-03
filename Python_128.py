def prod_signs(arr):
    if not arr:
        return None
    signs = [1 if x > 0 else -1 if x < 0 else 0 for x in arr]
    magnitude_sum = sum(abs(x) for x in arr)
    product_of_signs = reduce(lambda x, y: x * y, signs)
    return magnitude_sum * product_of_signs