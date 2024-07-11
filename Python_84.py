def solve():
    while True:
        try:
            N = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input! Please enter a whole number.")
            
    def convert_to_binary(n):
        return bin(n)[2:]
    return convert_to_binary(N)

print(solve())