def solution(input_list):    
    if not input_list:        
        return None
    elif all(isinstance(x, int) and str(x).isdigit() for x in input_list):        
        return sum(map(int, input_list))    
    else:        
        raise ValueError("Input list contains non-integer values")