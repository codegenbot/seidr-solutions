def select_words(s, n):
    words = s.split()
    result = []
    vowels = 'aeiouAEIOU'
    for word in words:
        consonants_count = sum(1 for letter in word if letter.isalpha() and letter not in vowels)
        if consonants_count == n:
            result.append(word)
    return result