try:
    numbers = [int(x) for x in input("Enter numbers separated by space: ").split()]
except ValueError:
    print("Please enter valid numbers separated by space.")