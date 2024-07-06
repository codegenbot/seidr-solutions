def solve():
    choice = input("Do you want to (1) Convert decimal to binary or (2) Convert binary to decimal? ")
    
    if choice == '1':
        N = int(input("Enter a number: "))
        return "Binary: " + str(bin(N)[2:])
    elif choice == '2':
        N = input("Enter a binary number: ")
        return "Decimal: " + str(oct(int(N, 2))[2:])
    else:
        n1 = int(input("Enter a number: "))
        n2 = int(input("Enter another number: "))
        return str(n1 * n2)