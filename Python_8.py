while True:
    try:
        input_numbers = list(map(int, input("Enter space-separated numbers: ").split()))
        if all(isinstance(num, int) for num in input_numbers):
            break
        else:
            print("Invalid input. Please enter space-separated numbers only.")
    except ValueError:
        print("Invalid input. Please enter space-separated numbers only.")