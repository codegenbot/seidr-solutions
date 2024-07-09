```
def histogram(test):
    if not test:
        return {}
    
    count_dict = {}
    max_count = 0
    most_repeated = []
    
    for word in test.split():
        for letter in word:
            if letter in count_dict:
                count_dict[letter] += 1
            else:
                count_dict[letter] = 1
                
            if count_dict[letter] > max_count:
                max_count = count_dict[letter]
                most_repeated = [letter]
            elif count_dict[letter] == max_count:
                most_repeated.append(letter)
                
    return {k: v for k, v in zip(most_repeated, [max_count]*len(most_repeated))}