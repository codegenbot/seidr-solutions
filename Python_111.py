```
def histogram(test):
    if not test:
        return {}
    
    word_list = test.split()
    max_count = 0
    result = {}
    
    for word in word_list:
        if word not in result:
            result[word] = 1
        else:
            result[word] += 1
        
        if result[word] > max_count:
            max_count = result[word]
    
    final_result = {k: v for k, v in result.items() if v == max_count}
    
    return final_result