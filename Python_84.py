def solve():
    N = int(input(), 2)
    try:
        if N > 1:
            return "0b" + bin(N | (N - 1))[2:].replace("1", "10")
        else:
            return "0b" + str(bin(N)[2:])
    except ValueError:
        return "Invalid Input. Please provide a binary number."