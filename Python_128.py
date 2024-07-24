def prod_signs(arr):
    if not arr:
        return None
    sign = 1
    for num in arr:
        if num < 0:
            sign *= -1
        elif num > 0:
            sign *= 1
    return sum(abs(num) * sign for num in arr)