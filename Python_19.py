```
def sort_numbers():
    while True:
        numbers = input("Enter space-separated numbers: ")
        if not numbers.strip().split(): 
            print("Please enter valid numbers separated by spaces.")
            continue
        try:
            sorted_numbers = " ".join(map(str, sorted([int(num) for num in numbers.split()])))
            print(sorted_numbers)
            cont = input("Sort again? (y/n): ")
            if cont.lower() != "y":
                break
        except ValueError:
            print("Invalid input. Please enter valid numbers separated by spaces.")