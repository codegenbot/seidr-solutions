def prod_signs(arr):
    if len(arr) == 0:
        return None
    product = 1
    for num in arr:
        product *= num
    return sum(abs(num) for num in arr) * (1 if product > 0 else -1)