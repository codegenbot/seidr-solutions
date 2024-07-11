def solve():
    while True:
        try:
            N = str(input(f"Enter a {'binary' if binary else 'decimal'} number: "))
            if set(N).difference({"0", "1"}) != set() and not binary:
                raise ValueError
            if not binary:
                return float(N)
            if not N or (N[0] == "0" and len(N) > 1):
                raise ValueError
            return int(N, 2)
        except ValueError:
            print(
                f"Invalid input! Please enter a valid {'binary' if binary else 'decimal'}"
            )

    operation = str(
        input(
            "Do you want to convert from binary to decimal or vice versa? (type 'b' for binary to decimal and 'd' for decimal to binary): "
        )
    )

    if operation == "b":
        binary = True
    elif operation == "d":
        binary = False
    else:
        print("Invalid input! Please enter either 'b' or 'd'.")
        return

    print(solve(binary))