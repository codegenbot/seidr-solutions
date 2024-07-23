```
def sorted_list_sum(numbers):
    even_numbers = [int(i) for i in numbers.split() if int(i) % 2 == 0]
    try:
        return " ".join(map(str, sorted(even_numbers)))
    except ValueError as e:
        return str(e)