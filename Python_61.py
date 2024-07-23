def areSimilar(str1: str, str2: str) -> bool:
    if len(str1) != len(str2):
        return False
    
    diff1 = -1
    diff2 = -1
    for i in range(len(str1)):
        if str1[i] != str2[i]:
            if diff1 == -1:
                diff1 = i
            else:
                diff2 = i
                
    if diff1 == -1 or diff2 == -1:
        return False
    
    return str1[diff1] == str2[diff2]
