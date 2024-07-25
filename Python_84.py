def solve():
    while True:
        try:
            N = int(input("Enter an integer (0 or less to stop): "))
        except ValueError:
            print("Invalid input. Please enter an integer.")
        if N <= 0:
            break
        print("0b" + bin(N)[2:])