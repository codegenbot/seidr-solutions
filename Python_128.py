def product_of_signs(arr):
    result = 1
    for num in arr:
        if num > 0:
            result *= 1
        elif num < 0:
            result *= -1
    return result


def check():
    arr = list(map(int, input("Enter numbers separated by space: ").split()))
    print(product_of_signs(arr))


check()