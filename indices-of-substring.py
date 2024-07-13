def indices_of_substring(text):  
    target = input()    
    result = []    
    for i in range(len(text)):        
        if text[i:].startswith(target):
            for j in range(i + len(target), len(text) + 1):                
                if text[i:j].endswith(target):
                    result.append(str(i))
    return [int(x) for x in result]