try:
    while True:
        num_list = list(map(int, input("Enter exactly four numbers separated by space (e.g., 1 2 3 4): ").split()))
        if len(num_list) != 4:
            print("Invalid input. Please enter exactly four numbers separated by space.")
        elif any(num < 0 for num in num_list):
            print("Invalid input. Please enter positive numbers only.")
        else:
            result = 1
            for num in num_list:
                result *= num
            print(result)
            break  # exit the loop when input is correct
    # ask for input again to receive expected input
    input("Press Enter to continue...")
except ValueError:
    print("Invalid input. Please enter numeric values separated by space.")