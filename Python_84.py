def solve():
    total = 0
    while True:
        N = input("Enter an integer (0 or less to stop): ")
        if N.lower() == '0' or N.lower() == 'none':
            break
        try:
            N = int(N)
            total += N
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return bin(total)[2:]