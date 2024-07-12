def find_closest_number():
    value = float(input("Enter a decimal number: "))
    if value >= 0:
        closest_value = int(value + 0.5) if value % 1 > 0 else int(value)
    else:
        closest_value = int(value - 0.5) if abs(value) % 1 < 0.5 else int(value)
    return closest_value

print(find_closest_number())