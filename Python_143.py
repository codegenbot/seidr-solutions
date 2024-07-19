```
def words_in_sentence(sentence):
    primes = [2,3,5,7,11,13,17,19,23,29]
    result = ''
    for word in sentence.split():
        if len(word) in primes:
            result += word + ' '
    return result.strip()