def find_unique_numbers(numbers):
    return list(set(numbers))

numbers = []
while True:
    try:
        num = input("Enter a number or press Enter to finish: ")
        if num != '':  # Check if input is not empty
            numbers.append(int(num))
        else:
            break
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(find_unique_numbers(numbers))