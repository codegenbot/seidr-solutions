while True:
    numbers_input = input("Enter space-separated floating-point numbers: ")
    if numbers_input:
        numbers = list(map(float, numbers_input.split()))
        break
    else:
        print("Input should not be empty")