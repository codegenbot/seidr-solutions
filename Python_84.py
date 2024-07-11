def solve(binary=False):
    while True:
        try:
            N = int(input("Enter a number (0 or 1): "))
            break
        except ValueError:
            print("Invalid input! Please enter 0s and 1s.")

    if binary:
        return ''.join(map(str, [int(i) for i in bin(N)[2:]]))
    else:
        return str(N)

print(solve())