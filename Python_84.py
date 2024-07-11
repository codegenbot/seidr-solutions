def solve(binary):
    while True:
        try:
            if binary:
                N = int(input(f"Enter a {'binary' if binary else 'decimal'} number: "), 2 if binary else 10)
            else:
                N = float(input(f"Enter a {'decimal' if not binary else 'binary'} number: "))
            break
        except ValueError:
            print(f"Invalid input! Please enter a valid {'binary' if binary else 'decimal'}")

    print(str(N))

solve(True)