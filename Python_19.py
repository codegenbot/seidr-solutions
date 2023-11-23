from typing import List

def sort_numbers(numbers: List[int]) -> str:
    number_mapping = {
        0: 'zero',
        1: 'one',
        2: 'two',
        3: 'three',
        4: 'four',
        5: 'five',
        6: 'six',
        7: 'seven',
        8: 'eight',
        9: 'nine'
    }
    sorted_numbers = sorted(numbers, key=lambda x: number_mapping[x])
    return ' '.join([number_mapping[num] for num in sorted_numbers])