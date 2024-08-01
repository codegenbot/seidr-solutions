def find_zero():
    a = int(input("Enter a: "))
    b = int(input("Enter b: "))
    c = int(input("Enter c: "))
    
    if c == 0:
        return -b / (2 * a)
    else:
        return -b / (2 * c)
result = find_zero()
print(result)