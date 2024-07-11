```Python
def solve(binary):
    while True:
        try:
            if binary:
                N = input(f"Enter a {'binary' if binary else 'decimal'} number: ")
                if len(N) > 1 or set(N).difference({'0', '1'}) != set():
                    raise ValueError
                N = int(N, 2) if binary else int(N)
            else:
                N = float(input(f"Enter a {'binary' if not binary else 'decimal'} number: "))
            break
        except ValueError:
            print(f"Invalid input! Please enter a valid {'binary' if binary else 'decimal'}")

    if binary:
        print(bin(N)[2:])
    else:
        print(N)

solve(True)