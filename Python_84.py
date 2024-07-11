def solve(binary):
    while True:
        if binary:
            try:
                N = int(input("Enter a binary number: "), 2)
                break
            except ValueError:
                print("Invalid input! Please enter a valid binary")
        else:
            try:
                N = int(input("Enter a decimal number: "), 10)
                break
            except ValueError:
                print("Invalid input! Please enter a valid decimal")

    return str(N)

print(solve(True))