def sum_of_digits():
    total = 0
    while True:
        try:
            n = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input. Please enter a whole number.")
    while n:
        total += n % 10
        n //= 10
    return total

print(sum_of_digits())