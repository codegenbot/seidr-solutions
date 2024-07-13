def sort_numbers():
    while True:
        print("Sort numbers? (y/n): ")
        cont = input().lower()
        if cont != "y":
            return
        while True:
            try:
                numbers = input("Enter space-separated numbers: ")
                nums = [int(num) for num in numbers.split()]
                sorted_numbers = " ".join(map(str, sorted(nums)))
                print(sorted_numbers)
                cont = input("Sort again? (y/n): ")
                if cont.lower() != "y":
                    return
            except ValueError:
                print("Invalid input. Please enter valid numbers separated by spaces.")