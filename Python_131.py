def count_even_digits(n):
    total = 0
    for digit in str(n):
        if int(digit) % 2 == 0:
            total += 1
    return total


def check():
    while True:
        try:
            n = int(input("Enter a number: "))
            print(count_even_digits(n))
            cont = input("Do you want to continue? (yes/no): ")
            if cont.lower() != "yes":
                break
        except ValueError:
            print("Invalid input. Please enter an integer.")


check()