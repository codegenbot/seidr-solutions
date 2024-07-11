```
def solve(binary):
    while True:
        try:
            if binary:
                N = int(input("Enter a binary number: "), 2)
            else:
                N = int(input("Enter a decimal number: "), 10)
            break
        except ValueError:
            print("Invalid input! Please enter a valid {}".format('binary' if binary else 'decimal'))

    return str(N)

print(solve(True))