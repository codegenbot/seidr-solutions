```
def solve(N=None):
    total = 0
    if N is not None:
        if N <= 0:
            return str(total)
    while True:
        try:
            N = int(input("Enter an integer (0 or less to stop): "))
            if N <= 0:
                break
            if N > 0:
                print(bin(N)[2:])
            total += N
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return str(total)