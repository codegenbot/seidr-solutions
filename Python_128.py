def prod_signs(arr):
    if not arr:
        return None
    product = 1
    total_sum = 0
    for num in arr:
        product *= 1 if num == 0 else num / abs(num)
        total_sum += abs(num)
    return product * total_sum