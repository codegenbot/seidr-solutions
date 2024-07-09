def add(numbers):
    return sum(numbers)

def check():
    numbers = list(map(int, input("Enter numbers separated by spaces: ").split()))
    result = add(numbers)
    print("Result of addition:", result)

check()