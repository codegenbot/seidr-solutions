```
def solve(binary):
    while True:
        try:
            if binary:
                N = int(input("Enter a {} number: ".format('binary' if binary else 'decimal')), 2 if binary else 10)
            else:
                N = float(input("Enter a {} number: ").format('decimal'))
            break
        except ValueError:
            print("Invalid input! Please enter a valid {}".format('binary' if binary else 'decimal'))

    print(str(N))

solve(True)