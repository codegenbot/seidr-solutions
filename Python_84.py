def solve(N=None):
    total = 0
    while True:
        if N is None:
            try:
                N = int(input("Enter an integer (0 or less to stop): "))
                if N <= 0:
                    break
                total += N
            except ValueError:
                print("Invalid input. Please enter an integer.")
        else:
            if N == -1: 
                return str(total)
            else:
                return bin(N)[2:]