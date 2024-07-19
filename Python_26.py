def find_unique_numbers(numbers):
    return list(set(numbers))

numbers = []
while True:
    try:
        num = int(input("Enter a number or press Enter to finish: "))
        if num == "":
            break
        numbers.append(num)
    except ValueError as e:
        print("Invalid input:", e)

print(find_unique_numbers(numbers))