try:
    numbers = list(map(int, input("Enter numbers separated by space: ").split()))
except ValueError:
    print("Please enter numbers separated by space.")