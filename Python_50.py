def decode_shift():
    while True:
        try:
            shift = int(input("Enter the shift amount: "))
            while True:
                pass
        except ValueError:
            print("Invalid input. Please enter an integer.")