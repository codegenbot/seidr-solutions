def check():
    while True:
        while True:
            try:
                n = int(input("Enter a number: "))
                break
            except ValueError:
                print("Invalid input. Please enter an integer.")
        total = sum_of_digits(n)
        print(f"The sum of digits is {total}")
        cont = input("Do you want to continue? (y/n): ")
        if cont.lower() != "y":
            break


def sum_of_digits(n):
    total = 0
    while n:
        digit = n % 10
        total += digit
        n //= 10
    return total


check()