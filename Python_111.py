```
def histogram(test):
    if not test:
        return {}
    
    word_count = {}
    for word in test.split():
        for char in word:
            if char in word_count:
                word_count[char] += 1
            else:
                word_count[char] = 1
    
    max_count = max(word_count.values())
    most_common = {k: v for k, v in word_count.items() if v == max_count}
    
    return most_common