def sort_numbers():
    while True:
        numbers = input("Enter space-separated numbers: ")
        if not numbers.strip():  
            print("Please enter some numbers.")
            continue
        try:
            sorted_numbers = " ".join(map(str, sorted([int(num) for num in numbers.split()])))
            print(sorted_numbers)
            cont = input("Sort again? (y/n): ")
            if cont.lower() != 'y':
                break
        except ValueError:
            print("Invalid input. Please enter valid numbers separated by spaces.")

sort_numbers()