def add(a, b):
    return a + b


def check():
    print("Enter numbers separated by spaces:")
    a, b = map(int, input().split())
    result = add(a, b)
    print("Sum:", result)


check()