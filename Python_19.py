def sort_numbers(numbers: str) -> str:
    num_map = {'zero': 0, 'one': 1, 'two': 2, 'three': 3, 'four': 4,
               'five': 5, 'six': 6, 'seven': 7, 'eight': 8, 'nine': 9}
    sorted_list = sorted([num_map[i] for i in numbers.split()])
    return ' '.join([str(i) for i in num_map.keys()][[k for k, _ in sorted(enumerate(sorted_list), key=lambda x: x[1])])