def count_odd_numbers():
    while True:
        cont = input("Do you want to continue? (y/n): ")
        should_continue = cont.strip().lower() == "y"

        while should_continue:
            try:
                lst = [
                    int(x) for x in input("Enter numbers separated by space: ").split()
                ]
                odd_count = len([i for i in lst if i % 2 != 0])
                print(f"There are {odd_count} odd numbers.")
                cont = input("Continue? (y/n): ")
                should_continue = cont.strip().lower() == "y"
            except ValueError:
                print("Invalid input. Please enter numbers separated by space.")


count_odd_numbers()