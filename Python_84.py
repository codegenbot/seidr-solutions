def solve():
    while True:
        if input("Do you want to enter binary (y) or decimal (n)? ").lower() == "y":
            num = input("Enter a binary number: ")
            try:
                N = int(num, 2)
                print(N)
            except ValueError:
                print("Invalid binary input!")
        else:
            while True:
                N = float(input("Enter a decimal number: "))
                print(N)
                cont = input("Do you want to continue? (y/n): ")
                if cont.lower() != "y":
                    break


if __name__ == "__main__":
    solve()