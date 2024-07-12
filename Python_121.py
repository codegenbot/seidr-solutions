```
def count_odd_numbers():
    should_continue = True
    while should_continue:
        try:
            lst = [int(x) for x in input("Enter numbers separated by space: ").split()]
            if len(lst) == 0:
                break
            print(len([i for i in lst if i % 2 != 0]))
            cont = input("Continue? (y/n): ")
            while True:
                try:
                    if cont.lower() != 'n':
                        should_continue = True
                        break
                    else:
                        should_continue = False
                        break
                except ValueError:
                    print("Invalid input. Please enter y or n.")
        except ValueError:
            print("Invalid input. Please enter numbers separated by spaces.")
    print("Program ended.")

count_odd_numbers()