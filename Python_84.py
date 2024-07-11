def solve(binary):
    if binary:
        num = input("Enter a binary number: ")
        try:
            N = int(num, 2)
        except ValueError:
            print("Invalid binary input!")
            return

    else:
        num = input("Enter a decimal number: ")
        try:
            N = float(num)
        except ValueError:
            print("Invalid decimal input!")
            return

    print(N)

solve(True)