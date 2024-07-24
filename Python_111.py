```
def histogram(test):
    if not test:
        return {}
    
    words = test.split()
    frequency = {}
    max_count = 0
    
    for word in words:
        if word in frequency:
            frequency[word] += 1
        else:
            frequency[word] = 1
        
        if frequency[word] > max_count:
            max_count = frequency[word]
    
    max_frequency_dict = {k: v for k, v in frequency.items() if v == max_count}
    return max_frequency_dict