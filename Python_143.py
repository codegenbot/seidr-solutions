```
def words_with_vowels(sentence):
    result = []
    for word in sentence.split():
        if has_vowels(word):
            result.append(word)
    return ' '.join(result)

def has_vowels(word):
    vowels = 'aeiouAEIOU'
    for char in word:
        if char in vowels:
            return True
    return False