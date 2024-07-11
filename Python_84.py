def solve(binary=False):
    while True:
        try:
            N = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input! Please enter a whole number.")
            
    if binary:
        return bin(N)[2:]
    else:
        return str(N)

print(solve())