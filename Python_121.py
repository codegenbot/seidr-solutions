def solution(input_list):    
    if not input_list:        
        return None
    elif all(isinstance(x, int) and str(x).isdigit() for x in input_list):        
        return int(''.join(map(lambda x: str(x) if isinstance(x, int) else '', input_list))))