def prod_signs(arr):
    if not arr:
        return None
    signs_product = 1
    magnitude_sum = 0
    for num in arr:
        if num > 0:
            signs_product *= 1
        elif num < 0:
            signs_product *= -1
        else:
            signs_product *= 0
        magnitude_sum += abs(num)
    return signs_product * magnitude_sum