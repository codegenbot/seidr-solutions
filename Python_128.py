def prod_signs(arr):
    if not arr:
        return None
    product = 1
    for num in arr:
        if num < 0:
            product *= -1
        elif num == 0:
            return 0
    return sum(map(abs, arr)) * product