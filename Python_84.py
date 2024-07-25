```
def solve(N=None):
    total = 0
    if N is None:
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
    else:
        if N > 0:
            return bin(N)[2:]
        else:
            return str(total)
    return str(total)