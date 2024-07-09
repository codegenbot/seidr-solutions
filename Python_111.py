```
def histogram(test):
    if not test:
        return {}
    
    words = test.split()
    max_count = 0
    result = {}
    
    for word in words:
        count = words.count(word)
        
        if count > max_count:
            max_count = count
            result = {word: count}
        elif count == max_count:
            result[word] = count
    
    return result