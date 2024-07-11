def solve():
    while True:
        try:
            N = int(input("Enter a number: "))
            break
        except ValueError:
            print("Invalid input! Please enter a whole number.")
            
    return bin(N)[2:]

print(solve())