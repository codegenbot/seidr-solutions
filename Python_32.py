def find_zero():
    a = int(input("Enter the value of coefficient a: "))
    b = int(input("Enter the value of coefficient b: "))
    c = int(input("Enter the value of coefficient c: "))
    
    if c == 0:
        return -b / (2 * a)
    else:
        return -b / (2 * c)