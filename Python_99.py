def find_closest_number():
    value = float(input("Enter a decimal number: "))
    if value >= 0:
        closest_value = round(value)
    else:
        closest_value = -round(-value)
    return closest_value

print(find_closest_number())