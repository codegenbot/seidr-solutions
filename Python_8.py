def calculate_statistics():
    numbers = input("Enter a list of space-separated integers: ").split()
    try:
        numbers = [int(num) for num in numbers]
    except ValueError:
        print("Invalid input. Please enter a list of space-separated integers.")
        return

    total_sum = sum(numbers)
    product = 1
    for num in numbers:
        product *= num

    return total_sum, product


total_sum, product = calculate_statistics()
print(f"Total Sum: {total_sum}")
print(f"Product: {product}")