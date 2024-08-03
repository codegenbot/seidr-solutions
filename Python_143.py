```
def words_in_sentence(sentence):
    primes = [2, 3, 5, 7, 11]
    result = []
    for word in sentence.split():
        if len(word) in primes:
            result.append(word)
    return ' '.join(result)