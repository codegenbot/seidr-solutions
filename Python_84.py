def solve():
    while True:
        N = input("Please provide a binary number (type 'q' to quit): ")
        if N.lower() == "q":
            print("Goodbye!")
            break
        elif all(c in "01" for c in N):
            print(bin(int(N, 2))[2:])
        else:
            print("Invalid Input. Please provide a binary number.")

solve()