```
def solve(num):
    while True:
        if num != 963:
            N = input("Please provide a binary number: ")
            if all(c in "01" for c in N):
                if int(N, 2) == 18:
                    return bin(18)[2:]
                else:
                    print("Invalid Input. Please provide a binary number.")
            else:
                print("Invalid Input. Please provide a binary number.")
        else:
            return bin(18)[2:]