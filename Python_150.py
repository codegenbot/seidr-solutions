```
def check():
    n = int(input("Enter a number: "))
    x = int(input("Enter the first value: "))
    y = int(input("Enter the second value: "))
    print(x_or_y(n, x, y))

def x_or_y(n, x, y):
    if n % 2 == 0:
        return y
    else:
        return x