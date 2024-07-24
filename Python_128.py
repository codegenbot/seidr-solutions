```
def prod_signs(arr):
    if not arr:
        return None
    signs = [x//abs(x) if x != 0 else 1 for x in arr]
    magnitude_sum = sum(abs(x) for x in arr)
    sign_product = reduce(lambda x, y: x*y, signs, 1)
    return sign_product * magnitude_sum