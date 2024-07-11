```
def solve(binary):
    while True:
        try:
            N = str(input(f"Enter a {'binary' if binary else 'decimal'} number: ")).strip()
            if set(N).difference({'0', '1'}) != set() and not binary:
                raise ValueError
            N = int(N, 2) if N.isdigit() and len(N) > 0 and N[0] != '0' or (len(N) > 1 and N[0] == '0' and N[1] != '0') else float(N)
            break
        except ValueError:
            print(f"Invalid input! Please enter a valid {'binary' if binary else 'decimal'}")

    print(str(N))

solve(True)