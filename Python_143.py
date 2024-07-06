
def words_in_sentence(sentence):
    # split the sentence into a list of words
    words = sentence.split()
    
    # create an empty list to store the prime number words
    prime_words = []
    
    # iterate over the words and check if their lengths are prime numbers
    for word in words:
        if is_prime(len(word)):
            prime_words.append(word)
    
    # join the prime words with a space and return them
    return " ".join(prime_words)