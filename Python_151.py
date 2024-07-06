def double_the_difference(numbers):
    first_max = max(set([abs(num) for num in numbers]))
    second_max = sorted({num for num in numbers})[-2]

    if first_max - second_max > 0:
        return (first_max - second_max) * 2
    else:
        return "No difference to double"