def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    odds = [x for i, x in enumerate(l) if i % 2 != 0]
    
    sorted_l = []
    even_index = odd_index = 0
    
    while even_index < len(evens) and odd_index < len(odds):
        if evens[even_index] <= odds[odd_index]:
            sorted_l.append(evens[even_index])
            even_index += 1
        else:
            sorted_l.append(odds[odd_index])
            odd_index += 1
    
    sorted_l.extend(evens[even_index:])
    sorted_l.extend(odds[odd_index:])
    
    return sorted_l