```
def histogram(test):
    if not test:
        return {}
    
    words = test.split()
    count_dict = {}
    
    for word in words:
        if word in count_dict:
            count_dict[word] += 1
        else:
            count_dict[word] = 1
    
    max_count = max(count_dict.values())
    
    result = {k: v for k, v in count_dict.items() if v == max_count}
    
    return result