def sorted_list_sum(numbers):
    even_numbers = [str(num) for num in numbers if isinstance(num, str)]
    return " ".join(sorted(even_numbers))