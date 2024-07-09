def prod_signs(arr):
    if not arr:
        return None
    signs = 1
    magnitude_sum = 0
    for num in arr:
        magnitude_sum += abs(num)
        signs *= -1 if num < 0 else (1 if num > 0 else 1)
    return magnitude_sum * signs