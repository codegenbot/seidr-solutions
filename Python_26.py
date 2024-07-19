def find_unique_numbers(numbers):
    return list(set(numbers))

numbers = []
while True:
    try:
        num = input("Enter a number or press Enter to finish: ")
        if not num:
            break
        numbers.append(int(num))
    except ValueError as e:
        print("Invalid input:", e)

print(find_unique_numbers(numbers))