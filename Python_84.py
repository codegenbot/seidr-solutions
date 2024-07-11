```Python
def solve():
    while True:
        try:
            binary = input("Enter a (binary or decimal): ")
            if binary.lower() == 'binary':
                while True:
                    N = input("Enter a binary: ")
                    if set(N).issubset({'0', '1'}):
                        return str(int(N, 2))
                    else:
                        print("Invalid input! Please enter only 0s and 1s")
            elif binary.lower() == 'decimal':
                N = int(input("Enter a decimal: "))
                return str(N)
            else:
                print("Invalid input! Please enter 'binary' or 'decimal'")
        except ValueError:
            print("Invalid input! Please enter a valid {} number".format('binary' if binary.lower() == 'binary' else 'decimal'))

print(solve())