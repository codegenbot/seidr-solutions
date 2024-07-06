def main():
    if int(input("Do you want to (1) Convert decimal to binary or (2) Convert binary to decimal? ")) == 1:
        N = int(input("Enter a number: "))
        return bin(N)[2:]
    elif int(input("Do you want to (1) Convert decimal to binary or (2) Convert binary to decimal? ")) == 2:
        N = input("Enter a binary number: ")
        return oct(int(N, 2))[2:]
    else:
        num1 = int(input("Enter a number: "))
        num2 = int(input("Enter another number: "))
        return str(num1) * str(num2)

print(main())