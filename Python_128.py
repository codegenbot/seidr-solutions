def prod_signs(arr):
    sign_product = 1
    magnitude_sum = 0
    for num in arr:
        if num != 0:
            sign_product *= -1 if num < 0 else 1
            magnitude_sum += abs(num)
        elif len(arr) > 0 and sign_product == 1:
            return None
    return sign_product * magnitude_sum