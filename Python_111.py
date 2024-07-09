```
def histogram(test):
    if not test:
        return {}
    
    word_list = test.split()
    max_count = 0
    result = {}
    
    for word in word_list:
        if not word:
            continue
        
        count = word_list.count(word)
        
        if count > max_count:
            max_count = count
            result = {word: count}
        elif count == max_count:
            if word not in result:
                result[word] = count
    
    return result