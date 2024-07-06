```
def prod_signs(arr):
    if not arr:
        return None
    product = 1
    magnitude_sum = sum(abs(x) for x in arr)
    sign_product = 1
    for num in arr:
        if num > 0:
            sign_product *= 1
        elif num < 0:
            sign_product *= -1
    return sign_product * magnitude_sum