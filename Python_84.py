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
        while True:
            cont = input("Do you want to continue? (y/n): ")
            if cont.lower() != 'y':
                break
            while True:
                try:
                    N = float(input("Enter a decimal number: "))
                    print(N)
                    break
                except ValueError:
                    print("Invalid input! Please enter a valid decimal number.")