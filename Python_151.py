def double_the_difference(a, b):
    return abs(int(a) - int(b)) * 2

print(double_the_difference(*map(int, input("Enter elements separated by comma: ").split(","))))