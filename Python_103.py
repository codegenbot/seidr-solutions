def sum_of_numbers():
    total = 0
    while True:
        num = input("Enter a number (or 'stop' to finish): ")
        if num.lower() == "stop":
            break
        try:
            total += int(num)
        except ValueError:
            print("Invalid input. Please enter a valid number.")
    return total