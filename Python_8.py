try:
    numbers = list(map(int, input("Enter space-separated numbers: ").split()))
except ValueError:
    print("Please enter valid numbers separated by spaces.")