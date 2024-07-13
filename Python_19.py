```
def sort_numbers(user_input=None):
    while True:
        if user_input: 
            numbers = user_input.split()
            nums = [int(num) for num in numbers]
            if len(nums) == 0:
                print("No numbers entered. Please try again.")
                continue
            sorted_numbers = " ".join(map(str, sorted(nums)))
            print(sorted_numbers)
            cont = input("Sort again? (y/n): ").lower()
            while True:
                if cont not in ["y", "n"]:
                    print("Invalid input. Please enter y or n.")
                    cont = input("Sort again? (y/n): ").lower()
                else:
                    break
            if cont == "n":
                break 
        else: 
            while True:
                try:
                    numbers = input("Enter space-separated numbers: ")
                    nums = [int(num) for num in numbers.split()]
                    if len(nums) == 0:
                        print("No numbers entered. Please try again.")
                        continue
                    sorted_numbers = " ".join(map(str, sorted(nums)))
                    print(sorted_numbers)
                    cont = input("Sort again? (y/n): ").lower()
                    while True:
                        if cont not in ["y", "n"]:
                            print("Invalid input. Please enter y or n.")
                            cont = input("Sort again? (y/n): ").lower()
                        else:
                            break
                    if cont == "n":
                        break 
                except ValueError as e:
                    print(f"Invalid input. {e}. Please enter valid numbers separated by spaces.")