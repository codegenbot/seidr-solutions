def find_zero(a: int, b: int, c: int):
    if c == 0:
        return -b / (2 * a)
    else:
        return -b / (2 * c)


a = int(input("Enter the value of a: "))
b = int(input("Enter the value of b: "))
c = int(input("Enter the value of c: "))

result = find_zero(a, b, c)
print("Result: ", result)