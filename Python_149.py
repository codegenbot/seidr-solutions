def sorted_list_sum(numbers):
    even_numbers = [num for num in numbers if isinstance(num, int) and num % 2 == 0]
    return sum(even_numbers)