```
def solve():
    while True:
        N = input("Please provide a binary number: ")
        if all(c in "01" for c in N):
            print(bin(int(N, 2))[2:])
            break
        else:
            print("Invalid Input. Please provide a binary number.")
            continue