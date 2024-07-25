def calculate_sum():
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
            return str(total)


def binary_conversion(N):
    return bin(N)[2:]


N = None
print(calculate_sum())