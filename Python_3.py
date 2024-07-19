def get_integer_input(prompt):
    while True:
        try:
            num = input(prompt + " (1, 2, or 3): ")
            if num == '':
                print("Invalid input. Please enter a valid integer (1, 2, or 3).")
                continue
            num = int(num)
            if num in [1, 2, 3]:
                return num
            print("Invalid input. Please enter a valid integer (1, 2, or 3).")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")