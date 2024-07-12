def count_odd_numbers():
    user_name = input("Please enter your name: ")
    print(f"Hello {user_name}! Let's count some odd numbers.")

    while True:
        cont = input("Do you want to continue? (y/n): ")
        should_continue = cont.strip().lower() == "y"

        while not should_continue:
            while True:
                try:
                    lst = [
                        int(x)
                        for x in input("Enter numbers separated by space: ").split()
                    ]
                    if len(lst) == 0:
                        break
                    print(len([i for i in lst if i % 2 != 0]))
                    cont = input("Continue? (y/n): ")
                    should_continue = cont.strip().lower() == "y"
                except ValueError:
                    print("Invalid input. Please enter numbers separated by space.")
        else:
            print(f"Program ended, {user_name}.")


count_odd_numbers()