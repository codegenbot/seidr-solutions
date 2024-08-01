def find_zero(a: int, b: int, c: int):
    if c == 0:
        return -b / (2 * a)
    else:
        return -b / (2 * c)

a = int(input("Enter value for a: "))
b = int(input("Enter value for b: "))
c = int(input("Enter value for c: "))

result = find_zero(a, b, c)
print(result)