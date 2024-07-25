try:
    numbers = list(map(float, input("Enter space-separated numbers: ").split()))
except ValueError:
    print("Error: Input format is incorrect. Please provide space-separated numbers.")