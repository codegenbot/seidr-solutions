def sort_even():
    lst = input("Enter a list of integers separated by spaces: ").split()
    lst = [int(i) for i in lst]
    
    evens = sorted([x for x in lst if x % 2 == 0])
    odds = sorted([x for x in lst if x % 2 != 0])

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

    result.extend(evens[even_index:])
    result.extend(odds[odd_index:])

    return tuple(result)