def solve(binary=False):
    while True:
        try:
            N = int(input("Enter a {} ({}): ".format('number' if not binary else 'binary number', 'decimal' if not binary else 'binary')), 2) if binary else int(input("Enter a {}: ".format('number')))
            break
        except ValueError:
            print("Invalid input! Please enter a valid {}".format('binary number' if binary else 'number'))
            
    return str(N)

print(solve())