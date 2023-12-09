def prod_signs(arr):
    if len(arr) == 0:
        return None
    else:
        product = 1
        for num in arr:
            if num > 0:
                product *= 1
            elif num < 0:
                product *= -1
            else:
                product *= 0
        return sum(arr) * product