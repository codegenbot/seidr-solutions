def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        consonant_count = sum(
            1 for letter in word if letter.isalpha() and letter.lower() not in "aeiou"
        )
        if consonant_count == n:
            result.append(word)
    return result