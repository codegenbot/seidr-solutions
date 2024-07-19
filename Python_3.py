def get_integer_input(prompt):
    while True:
        try:
            num = int(input(prompt + " (1, 2, or 3): "))
            if num in [1, 2, 3]:
                return num
            print("Invalid input. Please enter a valid integer (1, 2, or 3).")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

operations = set()
while len(operations) < 3:
    new_num = get_integer_input("Enter operation number " + str(len(operations) + 1))
    if new_num not in operations:
        operations.add(new_num)
    else:
        print("Operation number should be distinct. Please enter a different number.")

print(operations)