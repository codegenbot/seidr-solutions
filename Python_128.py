def prod_signs(arr):
    if not arr:
        return None
    product = 1
    magnitude_sum = 0
    for num in arr:
        product *= 1 if num == 0 else num / abs(num)
        magnitude_sum += abs(num)
    return product * magnitude_sum