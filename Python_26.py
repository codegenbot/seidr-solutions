def find_unique_numbers(numbers):
    return list(set(numbers))

numbers = []
while True:
    try:
        num = int(input("Enter a number or press Enter to finish: "))
        if not num:  # Check if input is empty
            break
        numbers.append(num)
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(find_unique_numbers(numbers))