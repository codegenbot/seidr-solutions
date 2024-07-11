```
def prod_signs(arr):
    signs = [1 if x > 0 else -1 if x < 0 else 0 for x in arr]
    product = 1
    for sign in signs:
        if sign != 0:
            return "Error: The array contains zero"
        product *= sign
    return product

def check(product_of_signs):
    arr = list(map(int, input().split()))
    print(product_of_signs(arr))

check(prod_signs)