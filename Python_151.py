def double_the_difference(a, b):
    if int(a) > int(b):
        return (int(a) - int(b)) * 2
    else:
        return (int(b) - int(a)) * 2

print(double_the_difference(*map(str.strip, input("Enter elements separated by comma: ").split(","))))