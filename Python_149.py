def sorted_list_sum(numbers):
    return [' '.join(map(str, map(int, s))) for s in (sorted(s.replace(' ', '') for s in numbers))]