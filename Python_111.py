```
def histogram(test):
    if not test:
        return {}
    
    letter_count = {}
    for word in test.split():
        for letter in word:
            if letter in letter_count:
                letter_count[letter] += 1
            else:
                letter_count[letter] = 1
    
    max_count = max(letter_count.values())
    result = {k: v for k, v in letter_count.items() if v == max_count}
    
    return result