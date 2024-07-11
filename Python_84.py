def solve(binary=False):
    while True:
        try:
            if binary:
                N = int(input("Enter a binary number: "), 2)
            else:
                N = int(input("Enter a decimal number: "))
            return str(N)
        except ValueError:
            print("Invalid input! Please enter a valid {}".format('binary' if binary else 'decimal'))

print(solve(True))