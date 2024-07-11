```
def solve(is_binary):
    if is_binary:
        while True:
            num = input("Enter a binary number (0s and 1s): ")
            try:
                N = int(num, 2)
                print(N)
                break
            except ValueError:
                print("Invalid binary input! Please enter again.")
    else:
        while True:
            cont = input("Do you want to continue? (y/n): ")
            if cont.lower() != 'y':
                break
            N = float(input("Enter a decimal number: "))
            print(N)