def sort_numbers(numbers):
    numbers = sorted([int(number) for number in numbers])
    return " ".join([str(number) for number in numbers])