def solve(binary=False):
    while True:
        if binary:
            try:
                N = int(input("Enter a {} ({}): ".format('binary number', 'decimal')), 2)
                break
            except ValueError:
                print("Invalid input! Please enter a valid binary number")
        else:
            try:
                N = int(input("Enter a {}: ".format('number')))
                break
            except ValueError:
                print("Invalid input! Please enter a valid number"
                
    return str(N)

print(solve(True))