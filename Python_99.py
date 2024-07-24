```
def closest_integer(value):
    num = float(value)
    if abs(num) % 1 < 0.5:
        return int(round(num))
    elif num > 0:
        return int(num) + 1
    else:
        return int(num) - 1

value = float(input("Enter a number: "))

print(closest_integer(value))