```
def solve(is_binary):
    if is_binary:
        num = input("Enter a binary number (0s and 1s): ")
        try:
            N = int(num, 2)
            print(N)
        except ValueError:
            print("Invalid binary input!")
    else:
        while True:
            cont = input("Do you want to continue? (y/n): ")
            if cont.lower() != 'y':
                break
            N = float(input("Enter a decimal number: "))
            print(N)

if __name__ == "__main__":
    solve(True)  
    print()
    solve(False)