def sort_numbers():
    while True:
        if not input("Do you want to enter numbers? (y/n): ").lower() == "n":
            user_input = input("Enter space-separated numbers: ")
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