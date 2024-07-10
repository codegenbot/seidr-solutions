```
def sum_squares():
    numbers = []
    while len(numbers) < 5:
        try:
            num = float(input("Enter a number (or 'stop' to finish): "))
            if num == 'stop':
                break
            if not isinstance(num, (int, float)):
                raise ValueError("Invalid input. Only numbers are allowed.")
            numbers.append(num)
        except ValueError as e:
            print(e)
    return sum([i ** 2 for i in numbers])