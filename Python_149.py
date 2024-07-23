def sorted_list_sum(numbers): 
    even_numbers = [num for num in numbers if set(num).issubset('0123456789')]
    return " ".join(sorted(even_numbers))