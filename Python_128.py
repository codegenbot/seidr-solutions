def prod_signs(arr):
    if not arr:
        return None
    product_of_signs = 1
    sum_of_magnitudes = 0
    for num in arr:
        sum_of_magnitudes += abs(num)
        if num > 0:
            product_of_signs *= 1
        elif num < 0:
            product_of_signs *= -1
        else:
            product_of_signs *= 0
    return sum_of_magnitudes * product_of_signs