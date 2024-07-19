def solution(input_list):    
    if not input_list:        
        return 
    elif all(isinstance(x, int) and str(x).isdigit() for x in input_list):        
        return int(''.join(map(str, input_list)))    
    else:        
        return