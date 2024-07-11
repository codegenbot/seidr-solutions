def solve(is_binary):
    if is_binary:
        num = input("Enter a binary number: ")
        try:
            N = int(num, 2)
            print(N)
        except ValueError:
            print("Invalid binary input!")
    else:
        num = input("Enter a decimal number: ")
        try:
            N = float(num)
            print(N)
        except ValueError:
            print("Invalid decimal input!")

if __name__ == "__main__":
    solve(True)