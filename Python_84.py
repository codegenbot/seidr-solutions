def solve(binary):
    while True:
        if binary:
            N = str(input(f"Enter a {'binary' if binary else 'decimal'} number: ")).strip()
            if set(N).difference({'0', '1'}) != set():
                raise ValueError
            N = int(N, 2) if N.isdigit() and len(N) > 0 and N[0] != '0' or (len(N) > 1 and N[0] == '0' and N[1] != '0') else float(N)
        else:
            N = float(input(f"Enter a {'decimal' if not binary else 'binary'} number: ").strip())
        break
    print(str(N))

solve(True)