```
def histogram(test):
    if not test:
        return {}
    
    words = test.split()
    hist = {}
    max_count = 0
    
    for word in words:
        if word:
            count = hist.get(word, 0)
            hist[word] = count + 1
            max_count = max(max_count, count + 1)
    
    result = {k: v for k, v in hist.items() if v == max_count}
    return result