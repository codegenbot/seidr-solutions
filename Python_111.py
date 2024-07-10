```
def histogram(test):
    if not test:
        return {}
    
    words = test.split()
    max_count = len(words)
    result = {}
    
    for word in set(words):
        count = words.count(word)
        if count > 0 and count <= max_count:
            result[word] = count
            max_count = count
    
    return result