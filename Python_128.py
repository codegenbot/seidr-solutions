```
def prod_signs(arr):
    if not arr:
        return None
    sign_product = 1
    total_sum = 0
    for num in arr:
        if num < 0:
            sign_product *= -1
        elif num > 0:
            sign_product *= 1
        else:
            sign_product *= 0
        total_sum += abs(num)
    return sign_product * total_sum