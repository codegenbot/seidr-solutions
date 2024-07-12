def sort_numbers():
    while True:
        while True:
            numbers = input("Enter space-separated numbers: ")
            try:
                sorted_numbers = " ".join(map(str, sorted([int(num) for num in numbers.split()])))
                print(sorted_numbers)
                break
            except ValueError:
                print("Invalid input. Please enter valid numbers separated by spaces.")
        break

sort_numbers()