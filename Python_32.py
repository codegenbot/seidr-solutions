def solve(a, b, c):
    try:
        return -float(c) / float(b)
    except ZeroDivisionError:
        return "Error: Division by zero"


a = int(input("Enter value for a: "))
b = int(input("Enter value for b: "))
c = int(input("Enter value for c: "))

result = solve(a, b, c)
print(result)