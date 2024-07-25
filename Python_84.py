def solve(N=None):
    total = 0
    if N is None:
        while True:
            try:
                N = int(input("Enter an integer (0 or less to stop): "))
                if N <= 0:
                    break
                total += N
            except ValueError:
                print("Invalid input. Please enter an integer.")
    else:
        return str(total) if N < 0 else bin(N)[2:]
    return str(total)