def sort_third(input_list):
    result = []
    for i in range(0, len(input_list), 3):
        current_group = [int(x) for x in input_list[i:i+3]]
        
        if i + 3 < len(input_list): 
            result.append(tuple(sorted(current_group)))
        else:
            result.append(tuple(sorted([int(x) for x in current_group])))
            
    return tuple(sorted(result))