def sort_numbers():
    numbers = input("Enter space-separated numbers: ")
    sorted_numbers = " ".join(map(str, sorted([int(num) for num in numbers.split()])))
    print(sorted_numbers)