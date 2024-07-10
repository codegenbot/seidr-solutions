def closest_integer():
    value = float(input("Enter a number: "))
    num = value
    if num % 1 < 0.5:
        return int(num)
    else:
        return int(round(num))

print(closest_integer())