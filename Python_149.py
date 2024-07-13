def sorted_list_sum(lst):
    numbers = [''.join(filter(str.isdigit, s)) for s in lst if any(c.isdigit() for c in s)]
    numbers = [int(n) for n in numbers]
    sorted_numbers = [str(i).zfill(len(max(numbers, key=len))) for i in sorted(numbers)]
    return ''.join(sorted_numbers)