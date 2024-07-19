def solution(input_list):    
    if not input_list:        
        return "The list is empty."    
    elif all(x.isdigit() for x in input_list):        
        return int(''.join(map(str, input_list)))    
    else:        
        return "The list contains non-integer values."