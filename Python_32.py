try:
    input_numbers = list(map(float, input("Enter three floating-point numbers separated by space: ").split()))
except:
    print("Invalid input. Please enter three floating-point numbers separated by space.")