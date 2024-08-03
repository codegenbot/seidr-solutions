```
def prod_signs(arr):
    if not arr:
        return None
    
    signs = [x//abs(x) for x in arr]
    product_of_signs = 1
    for sign in signs:
        product_of_signs *= sign
    
    return sum(abs(x) for x in arr) * product_of_signs