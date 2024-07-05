from typing import List

def sort_numbers(numbers: str) -> str:
    num_str_to_int = {
        'zero': 0, 'one': 1, 'two': 2, 'three': 3, 'four': 4,
        'five': 5, 'six': 6, 'seven': 7, 'eight': 8, 'nine': 9
    }
    int_to_num_str = {v: k for k, v in num_str_to_int.items()}
    sorted_numbers = sorted(numbers.split(), key=lambda x: num_str_to_int[x])
    return ' '.join(sorted_numbers)