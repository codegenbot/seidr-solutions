def solve(binary):
    while True:
        try:
            if binary:
                N = int(input(f"Enter a {'binary' if binary else 'decimal'} number: "), 0)
                if set(str(N)).difference({'0', '1'}) != set():
                    raise ValueError
            else:
                N = float(input(f"Enter a {'decimal' if not binary else 'binary'} number: "))
            break
        except ValueError:
            print(f"Invalid input! Please enter a valid {'binary' if binary else 'decimal'}")

    print(str(N))

solve(True)