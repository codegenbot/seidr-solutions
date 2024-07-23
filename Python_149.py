def sorted_list_sum(numbers):
    even_numbers = [num for num in numbers if isinstance(num, str) and int(str(int(num)) % 2 == 0)]
    return " ".join(sorted(even_numbers))