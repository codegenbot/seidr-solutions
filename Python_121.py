def count_odd_numbers():
    while True:
        try:
            user_input = input("Enter numbers separated by space or 'stop' to end: ")
            if user_input.lower() == "stop":
                break
            lst = [int(x) for x in user_input.split()]
            if len(lst) == 0:
                continue
            print(len([i for i in lst if i % 2 != 0]))
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")
    print("Program ended.")

count_odd_numbers()