def prod_signs(arr):
    if not arr:
        return None
    result = 1
    for num in arr:
        result *= num if num > 0 else -num
    return result