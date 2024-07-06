def solve(N):
    result = ""
    for i in str(bin(N)[2:]):
        if i == "1":
            result += "1"
        else:
            result += "0"
    return result