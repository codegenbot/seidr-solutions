try:
    numbers = list(map(float, input("Enter space-separated numbers: ").strip().split()))
    print(numbers)
except ValueError:
    print("Please enter valid space-separated numbers.")