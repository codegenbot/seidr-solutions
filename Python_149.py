def sorted_list_sum(numbers):
    even_numbers = [str(num) for num in numbers if int(num) % 2 == 0]
    return " ".join(sorted(even_numbers))