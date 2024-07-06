```
def prod_signs(arr):
    if len(arr) == 0:
        return None
    sign_product = 1
    total_sum = sum(abs(x) for x in arr)
    for num in arr:
        sign_product *= -1 if num < 0 else 1 if num > 0 else 0
    return sign_product * total_sum