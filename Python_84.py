def solve():
    N = int(input("Enter a number: "))
    if N < 2:
        return str(N) * N
    else:
        binary = bin(N)[2:].replace("1", "a").replace("0", "b")
        return str(int(binary, 2))

print(solve())