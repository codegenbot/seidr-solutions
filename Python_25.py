def sum_of_digits():
    total = 0
    while True:
        try:
            n = int(input("Enter a whole number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a whole number.")
    return sum(int(digit) for digit in str(n))

print(sum_of_digits())