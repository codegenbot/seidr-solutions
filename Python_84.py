def solve(N=None):
    while True:
        if N is None:
            N = int(input("Enter an integer (0 or less to stop): "))
        if N <= 0:
            break
        print(f"0b{bin(N)[2:]}")
        N = None