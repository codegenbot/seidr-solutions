```
def solve(N):
    try:
        N = int(bin(N)[2:])
    except ValueError:
        return "Invalid Input. Please provide a binary number."
    if N > 1:
        return bin(N | (N - 1))[2:].replace("1", "10")
    else:
        return str(bin(N)[2:])