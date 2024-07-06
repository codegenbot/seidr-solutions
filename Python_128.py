```
def prod_signs(arr):
    if not arr:
        return None
    product = 1
    magnitude_sum = sum(abs(x) for x in arr)
    sign_product = 1
    for num in arr:
        product *= num / abs(num)
    return product * magnitude_sum