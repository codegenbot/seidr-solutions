def solve(N):
    binary = str(bin(N)[2:])
    ones_count = sum(int(i) for i in binary)
    return bin(ones_count)[2:].zfill(len(binary)).replace("0b", "")