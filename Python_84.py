def solve(binary):
    while True:
        try:
            if binary:
                N = int(input("Enter a {} number: ").format('binary' if binary else 'decimal'), 2 if binary else 10)
            break
        except ValueError:
            print("Invalid input! Please enter a valid {}".format('binary' if binary else 'decimal'))

    return str(N)

print(solve(True))