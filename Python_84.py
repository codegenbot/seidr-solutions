```
def solve(is_binary):
    if is_binary:
        num = input("Enter a binary number: ")
        try:
            N = int(num, 2)
            print(N)
        except ValueError:
            print("Invalid binary input!")
    else:
        N = float(input("Enter a decimal number: "))
        print(N)

if __name__ == "__main__":
    solve(True)