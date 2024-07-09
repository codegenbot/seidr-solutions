```
def histogram(test):
    if not test:
        return {}
    
    words = test.split()
    max_count = 0
    most_common = {}
    
    for word in set(words):
        count = words.count(word)
        if count > max_count:
            max_count = count
            most_common = {word: count}
        elif count == max_count:
            most_common[word] = count
    
    return most_common