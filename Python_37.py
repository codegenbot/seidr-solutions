def sort_even(l: list) -> tuple:
    evens = [x for x in l if isinstance(x, int) and x % 2 == 0]
    odds = [x for x in l if isinstance(x, int) and x % 2 != 0]
    
    evens.sort()
    odds.sort(reverse=True)
    
    result = []
    even_index = 0
    odd_index = 0
    
    for x in l:
        if isinstance(x, int):
            if x % 2 == 0:
                result.append(evens[even_index])
                even_index += 1
            else:
                result.append(odds[odd_index])
                odd_index += 1
        else:
            result.append(x)
    
    return tuple(result)