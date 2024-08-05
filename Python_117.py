def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonants_count = sum(1 for letter in word if letter.lower() not in "aeiou")
        if consonants_count == n:
            result.append(word)
    return result