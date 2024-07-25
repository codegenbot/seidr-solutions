```
def solve(N=None):
    total = 0
    while True:
        if N is None:
            try:
                N = int(input("Enter an integer (0 or less to stop): "))
                if N <= 0:
                    return str(total)
                if N > 0:
                    print(bin(N)[2:])
                total += N
            except ValueError:
                print("Invalid input. Please enter an integer.")
        else:
            if N < 0:
                return str(total)
            elif N > 0:
                return bin(N)[2:]
    return str(total)