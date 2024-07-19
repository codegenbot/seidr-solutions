def find_unique_numbers(numbers):
    return list(set(numbers))


numbers = []
while True:
    try:
        num = input("Enter a number or press Enter to finish: ").strip()
        if num == "":
            break
        numbers.append(int(num))
    except ValueError:
        print("Invalid input. Please enter a valid number.")

print(find_unique_numbers(numbers))