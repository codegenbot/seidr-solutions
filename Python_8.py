while True:
    try:
        input_numbers = list(map(int, input("Enter space-separated numbers: ").split()))
        break
    except ValueError:
        print("Invalid input. Please enter space-separated numbers only.")