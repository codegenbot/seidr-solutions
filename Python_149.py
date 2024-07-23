def sorted_list_sum(*args):
    numbers = [int(i) for i in args[0].split() if i.isdigit()]
    even_numbers = []
    try:
        even_numbers = [num for num in numbers if int(num) % 2 == 0]
    except ValueError as e:
        return str(e)
    return " ".join(map(str, sorted(even_numbers)))