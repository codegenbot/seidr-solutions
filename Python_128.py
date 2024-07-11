```Python
def product_of_signs(arr):
    result = 1
    has_zero = False
    for x in arr:
        if x == 0:
            has_zero = True
        elif x < 0:
            result *= -1
    return result if not has_zero else 0

def check():
    arr = list(map(int, input("Enter numbers separated by space: ").split()))
    print(product_of_signs(arr))

check()