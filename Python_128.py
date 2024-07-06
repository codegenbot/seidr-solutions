def prod_signs(arr):
    if not arr:
        return None
    product = 1
    sum = 0
    for num in arr:
        if num > 0:
            product *= 1
        elif num < 0:
            product *= -1
        else:
            product *= 0
        sum += abs(num) * product
    return sum