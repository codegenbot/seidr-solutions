def solve(N):
    bin_N = bin(N)[2:]
    result = ""
    for i in range(len(bin_N)):
        if bin_N[i] == "1":
            result += "1"
            for j in range(i + 1, len(bin_N)):
                result += "0"
        else:
            result += "0" * (i + 1)
    return result