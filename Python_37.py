def sort_even(l: list):
    evens = [x for i, x in enumerate(l) if i % 2 == 0]
    odds = sorted([x for i, x in enumerate(l) if i % 2 != 0])

    result = []
    even_index = 0
    odd_index = 0
    while even_index < len(evens) and odd_index < len(odds):
        if even_index < len(evens): 
            result.append(evens[even_index])
            even_index += 1
        else:
            result.append(odds[odd_index])
            odd_index += 1

    return tuple(result + evens[even_index:] + odds[odd_index:])