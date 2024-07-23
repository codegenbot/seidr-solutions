def sorted_list_sum(numbers):
    numbers = [int(i) for i in numbers.split()]
    even_numbers = []
    try:
        even_numbers = [num for num in numbers if num % 2 == 0]
    except ValueError as e:
        return str(e)
    return " ".join(map(str, sorted(even_numbers)))