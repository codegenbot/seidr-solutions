```
def sum_squares():
    result = 0
    while True:
        try:
            num = float(input("Enter a number: "))
            if not isinstance(num, (int, float)):
                raise ValueError("Invalid input. Only numbers are allowed.")
            result += num ** 2
            break
        except ValueError as e:
            print(e)
    return result