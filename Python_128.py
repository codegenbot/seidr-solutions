```
def product_of_signs(arr):
    result = 1
    for x in arr:
        if x != 0:
            result *= -1 if x < 0 else 1
    return result if any(x != 0 for x in arr) else 0


def check():
    arr = list(map(int, input("Enter numbers separated by space: ").split()))
    print(product_of_signs(arr))


check()