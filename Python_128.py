def prod_signs(arr):
    if not arr:
        return None
    product = 1
    total = 0
    for num in arr:
        product *= 1 if num == 0 else num / abs(num)
        total += abs(num)
    return product * total