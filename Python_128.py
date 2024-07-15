def prod_signs(arr):
    if not arr:
        return None
    
    product_sign = 1
    sum_magnitudes = 0
    
    for num in arr:
        if num > 0:
            product_sign *= 1
        elif num < 0:
            product_sign *= -1
        sum_magnitudes += abs(num)
    
    return product_sign * sum_magnitudes