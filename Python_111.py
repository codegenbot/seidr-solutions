```
def histogram(test):
    if not test:
        return {}
    
    words = test.split()
    word_count = {}
    
    for word in words:
        if word in word_count:
            word_count[word] += 1
        else:
            word_count[word] = 1
    
    max_count = max(word_count.values())
    
    result = {word: count for word, count in word_count.items() if count == max_count}
    
    return result