```
def sum_squares():
    num = int(input("Enter a number: "))
    if num % 4 == 0:
        return num**2
    elif num % 3 == 0 and num % 4 != 0:
        return num**3
    else:
        return num**2

print(sum_squares())