def sort_third(l: list):
    sorted_list = sorted(l)
    remainder = len(sorted_list) % 3
    
    if remainder != 0:
        sorted_list.extend([None] * (3 - remainder))
    
    return [elem for group in zip(*[iter(sorted_list)] * 3) for elem in group]