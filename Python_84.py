def solve(N=None):
    total = 0
    if N is not None:
        if N <= 0:
            return str(total)
    while True:
        try:
            while True:
                N = input("Enter an integer (0 or less to stop): ")
                try:
                    N = int(N)
                    break
                except ValueError:
                    print("Invalid input. Please enter a valid integer.")
            if N <= 0:
                break
            if N > 0:
                print(bin(N)[2:])
            total += N
        except KeyboardInterrupt:
            break
    return str(total)