```
def count_odd_numbers():
    while True:
        try:
            lst = [int(x) for x in input("Enter numbers separated by space: ").split()]
            if len(lst) == 0:
                break
            print(len([i for i in lst if i % 2 != 0]))
            cont = input("Continue? (y/n): ")
            should_continue = cont.strip().lower() == "y"
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")
        while not should_continue.lower() in ["y", "n"]:
            cont = input("Please enter either 'y' or 'n': ")
            should_continue = cont.strip().lower()
    if not should_continue:
        print("Program ended.")


count_odd_numbers()