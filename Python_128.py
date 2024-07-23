```
def prod_signs(arr):
    if not arr:
        return None
    sign_product = 1
    magnitude_sum = sum(abs(i) for i in arr)
    for num in arr:
        sign_product *= -1 if num < 0 else 1 if num > 0 else 0
    return sign_product * magnitude_sum