def solve(N=None):
    while True:
        if N is None:
            try:
                N = int(input("Enter an integer (0 or less to stop): "))
                if N <= 0: 
                    break
            except ValueError:
                print("Invalid input. Please enter an integer.")