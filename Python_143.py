def words_in_sentence(sentence):
    primes = [
        i
        for i in range(len(sentence.split()))
        if all(i % j for j in range(2, int(i**0.5) + 1))
    ]
    return " ".join([sentence.split()[i] for i in primes])