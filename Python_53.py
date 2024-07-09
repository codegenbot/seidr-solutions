def add(a, b):
    return a + b


def check():
    print("Enter numbers separated by spaces:")
    numbers = input().split()
    a, b = map(int, numbers)
    result = add(a, b)
    print("Result:", result)


check()