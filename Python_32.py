try:
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
except ValueError:
    print("Invalid input. Please enter space-separated numbers only.")