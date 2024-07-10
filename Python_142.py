def sum_squares(*args):
    numbers = []
    for arg in args:
        while True:
            try:
                num = float(input(f"Enter a number: "))
                if not isinstance(num, (int, float)):
                    raise ValueError("Invalid input. Only numbers are allowed.")
                numbers.append(num)
                break
            except ValueError as e:
                print(e)
    return sum([i ** 2 for i in numbers])