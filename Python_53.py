def add(numbers):
    return sum(numbers)

def check():
    print("Enter numbers separated by spaces:")
    numbers = list(map(int, input().split()))
    result = add(numbers)
    print("Result of addition:", result)

check()