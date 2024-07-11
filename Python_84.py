def solve(binary):
    while True:
        try:
            if binary:
                N = input(f"Enter a binary number: ")
                N = int(N, 2)
            else:
                N = float(input("Enter a decimal number: "))
            break
        except ValueError:
            print(f"Invalid input! Please enter a valid {'binary' if binary else 'decimal'}")

    print(str(N))

solve(True)