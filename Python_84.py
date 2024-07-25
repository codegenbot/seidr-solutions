def solve(N=None):
    while True:
        if N is None:
            try:
                N = int(input("Enter an integer (0 or less to stop): "))
                if N <= 0: 
                    break
                elif N % 2 == 0 and N % 3 == 0:
                    print(f"The number {N} is divisible by both 2 and 3.")
                else:
                    print(f"{N} is not divisible by both 2 and 3.")
            except ValueError:
                print("Invalid input. Please enter an integer.")