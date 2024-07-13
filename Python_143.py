```Python
def words_in_sentence(sentence):
    prime_words = []
    for word in sentence.split():
        if is_prime(len(word)):
            prime_words.append(word)
    return ' '.join(prime_words)

def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

sentence = input("Enter your sentence: ")
print(words_in_sentence(sentence))