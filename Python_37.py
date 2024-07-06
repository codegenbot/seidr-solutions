def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [x for x in l if x % 2 != 0]
    
    result = []
    even_index = 0
    for i, x in enumerate(l):
        if x % 2 == 0:
            result.append(evens[even_index % len(evens)])
            even_index += 1
        else:
            result.append(x)
            
    return result