def generate_integers():
    a = int(input("Enter the first integer: "))
    b = int(input("Enter the second integer: "))
    return sorted([i for i in range(min(a,b), max(a,b)+1) if int(str(i)) % 2 == 0])