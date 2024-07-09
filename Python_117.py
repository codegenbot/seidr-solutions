def select_words(s, n):
    result = []
    words = s.split()
    for word in words:
        consonant_count = sum(1 for letter in word if letter.lower() not in "aeiou")
        if consonant_count == n:
            result.append(word)
    return result