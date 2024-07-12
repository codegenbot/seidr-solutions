def solve():
    while True:
        try:
            N = input("Please provide a binary number: ")
            if all(c in "01" for c in N):
                print(bin(int(N, 2))[2:])
                break
            else:
                print("Invalid Input. Please provide a binary number.")
                print("Try again!")
        except ValueError:
            print("Invalid input! Please enter a valid binary number.")
            print("Try again!")