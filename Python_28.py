```
def concatenate(strings=[]):
    result = ""
    
    for string in strings:
        result += string + " "
        
    return result.strip()