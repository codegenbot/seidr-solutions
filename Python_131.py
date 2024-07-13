def sum_of_digits(n):
    return sum(int(digit) for digit in str(n))

def check():
    while True:
        try:
            n = int(input("Enter a number: "))
            if 100 <= n <= 999:
                total = sum_of_digits(n)
                print(f"The sum of digits is {total}")
                break
            else:
                print("Invalid input. Please enter a three-digit integer.")
        except ValueError:
            print("Invalid input. Please enter an integer.")