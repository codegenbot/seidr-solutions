```
def product_of_signs(arr):
    result = 1
    has_zero = False
    for x in arr:
        if x == 0:
            has_zero = True
        elif x < 0:
            result *= -1
        elif x > 0:
            result *= 1
    return result if not has_zero else 0

def check():
    while True:
        input_str = input("Enter numbers separated by space: ")
        arr = list(map(int, input_str.split()))
        if all(isinstance(x, int) for x in arr):
            break
        else:
            print("Invalid input. Please enter numbers only and separate them with a space.")
    print(product_of_signs(arr))

check()