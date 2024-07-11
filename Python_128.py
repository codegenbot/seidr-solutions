```
def product_of_signs(arr):
    return 1 if all(x > 0 for x in arr) else -1

def check():
    arr = list(map(int, input().split()))
    print(product_of_signs(arr))

check()