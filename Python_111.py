```
def histogram(test):
    if not test:
        return {}
    
    word = test.split()
    max_count = 0
    result = {}
    
    for letter in set(word):
        count = word.count(letter)
        if count > max_count:
            max_count = count
            result = {letter: count}
        elif count == max_count:
            result[letter] = count
    
    return result