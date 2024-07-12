```
def find_closest_number():
    num = float(input("Enter a number: "))
    closest_int = round(num)
    if abs(closest_int - num) > 0.5:
        print(f"The closest integer is {closest_int + 1}." if num > closest_int else f"The closest integer is {closest_int - 1}.")
    else:
        print(f"The closest integer is {closest_int}.")