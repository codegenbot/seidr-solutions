def find_unique_numbers(numbers):
    return list(set(numbers))

numbers = []
try:
    while True:
        num = input("Enter a number or press Enter to finish: ")
        if not num.strip():  # Check if input is empty
            break
        numbers.append(int(num))
except KeyboardInterrupt:
    pass

print(find_unique_numbers(numbers))