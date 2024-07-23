def sorted_list_sum(numbers): 
    even_numbers = [str(num) for num in numbers if isinstance(num, str) and int(num) % 2 == 0 or not isinstance(num, str)]
    return " ".join(sorted(even_numbers))