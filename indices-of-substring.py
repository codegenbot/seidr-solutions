def indices_of_substring(text, target):
    result = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            for j in range(i, len(text)):
                if text[j:j+len(target)] == target:  
                    result.append(j) 