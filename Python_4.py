try:
    numbers = list(map(float, input("Enter the numbers separated by space: ").split()))
    print(sum(numbers))
except ValueError:
    print("Invalid input. Please enter numbers separated by space.")