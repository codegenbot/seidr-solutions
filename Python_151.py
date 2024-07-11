def double_the_difference(lst, target):
    even_numbers = [i for i in lst if isinstance(i, int) and i >= 0 and i % 2 == 0]
    try:
        diff = min(even_numbers)
        while True:
            sum_of_squares = sum(i**2 for i in even_numbers if abs(i - diff) == target)
            return sum_of_squares
            diff += target
    except ZeroDivisionError:
        pass