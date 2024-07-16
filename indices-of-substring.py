def indices_of_substring(text): 
    target = input() 
    result = [i for i in range(len(text)) if text.find(target) != -1] 
    return str(result)