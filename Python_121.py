def count_odd_numbers():
    while True:
        cont = input("Do you want to continue? (y/n): ")
        should_continue = cont.strip().lower() == "y"
        while should_continue:
            try:
                lst = [
                    int(x) for x in input("Enter numbers separated by space: ").split()
                ]
                if len(lst) == 0:
                    break
                print(len([i for i in lst if i % 2 != 0]))
                cont = input("Continue? (y/n): ")
                should_continue = cont.strip().lower() == "y"
            except ValueError:
                print("Invalid input. Please enter numbers separated by spaces.")
        if not should_continue:
            print("Program ended.")


count_odd_numbers()