try:
    numbers = [int(x) for x in input("Enter numbers separated by commas:").strip().split(",")]
except ValueError:
    print("Input error. Please enter numbers separated by commas.")