def calculate_total_and_product():
    total = 0
    product = 1
    while True:
        try:
            num = int(input("Enter a number (or 'stop' to finish): "))
            if num == "stop":
                break
            total += num
            product *= num
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return total, product