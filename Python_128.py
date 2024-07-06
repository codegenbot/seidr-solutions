def prod_signs(arr):
    if not arr:
        return None
    result = 1
    for num in arr:
        result *= (num > 0) - (num < 0)
    return sum(abs(num) for num in arr) * result