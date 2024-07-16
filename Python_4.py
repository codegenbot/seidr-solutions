try:
    n = int(input("Enter the number of elements: ").strip())
    numbers = list(map(float, input("Enter the numbers separated by space: ").strip().split()))
except ValueError:
    print("Input error. Please enter valid integers/floats separated by space.")