def count_odd_numbers():
    while True:
        try:
            try:
                lst = [
                    int(x) for x in input("Enter numbers separated by space: ").split()
                ]
                print(len([i for i in lst if i % 2 != 0]))
            except ValueError as e:
                print(f"Invalid input. {e}. Please enter numbers separated by spaces.")
        except EOFError:
            print("Program did not receive expected input. Exiting...")
            break


count_odd_numbers()