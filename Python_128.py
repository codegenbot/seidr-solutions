def prod_signs(arr):
    if not arr:
        return None
    signs = [1 if x > 0 else -1 if x < 0 else 0 for x in arr]
    return sum(abs(x) for x in arr) * math.prod(signs)