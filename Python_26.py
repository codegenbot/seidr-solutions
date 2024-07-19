def find_unique_numbers(numbers):
    return sorted(list(set(numbers))

numbers = []
while True:
    num = input("Enter a number or press Enter to finish: ")
    if num == "":
        break
    try:
        numbers.append(int(num))
    except ValueError as e:
        print("Invalid input:", e)

print(find_unique_numbers(numbers))