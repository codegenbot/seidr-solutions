def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonant_count = sum(1 for char in word if char.lower() not in "aeiou")
        if consonant_count == n:
            result.append(word)
    return result