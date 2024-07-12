def solve():
    try:
        N = int(input("Please provide a binary number: "), 2)
    except ValueError:
        return "Invalid Input. Please provide a binary number."
    if N == 0:
        return str(0)
    elif N == 1:
        return str(1)
    else:
        return bin(N | (N - 1))[2:].replace("1", "10")

if __name__ == "__main__":
    print(solve())