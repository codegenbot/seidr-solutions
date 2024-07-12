```
def count_odd_numbers():
    while True:
        cont = input("Do you want to continue? (y/n): ")
        should_continue = cont.strip().lower() == "y"

        while should_continue:
            try:
                lst = [int(x) for x in input("Enter numbers separated by space: ").split()]
                if len(lst) == 0:
                    print("Program ended.")
                    return
                print(len([i for i in lst if i % 2 != 0]))
                cont = input("Continue? (y/n): ")
                should_continue = cont.strip().lower() == "y"
            except ValueError as e:
                print(f"Invalid input. {str(e)}. Please enter numbers separated by space.")
                cont = input("Do you want to continue? (y/n): ")
                if cont.strip().lower() != "y":
                    return