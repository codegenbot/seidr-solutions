def product_of_signs(arr):
    arr = set(arr)
    has_zero = 0 in arr
    result = 1
    for x in arr:
        if x < 0:
            result *= -1
        elif x > 0:
            result *= 1
    return result if not has_zero else 0


def check():
    while True:
        arr = list(map(int, input("Enter numbers separated by space: ").split()))
        if len(arr) > 0 and all(isinstance(x, int) for x in arr):
            break
        else:
            print("Invalid input. Please enter non-empty sequence of integers.")
    print(product_of_signs(arr))


check()