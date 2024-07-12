def prod_signs(arr):
    if not arr:
        return None
    signs = 1
    for num in arr:
        if num != 0:
            signs *= -1 if num < 0 else 1
    return sum(abs(num) for num in arr) * abs(signs)