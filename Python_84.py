def solve(N):
    binary = str(bin(N)[2:]).replace("1", "a").replace("0", "b")
    return binary.count("a") * "a" + binary.count("b") * "b"