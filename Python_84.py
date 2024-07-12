def solve():
    N = int(input("Please provide a binary number: "), 2)
    try:
        if N == 0 or N == 1:
            return str(N)
        else:
            return bin(N | (N - 1))[2:].replace("1", "10")
    except ValueError:
        return "Invalid Input. Please provide a binary number."

if __name__ == "__main__":
    print(solve())