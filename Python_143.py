```
def words_in_sentence(sentence):
    primes = [i for i in range(2, int(len(sentence)**0.5)+1) if all(i%j for j in range(2,i))]
    result = ''
    for word in sentence.split():
        if len(word) in primes:
            result += word + ' '
    return result.strip()