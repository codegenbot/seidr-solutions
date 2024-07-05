def select_words(s, n):
    vowels = "aeiouAEIOU"
    words = s.split()
    result = []
    for word in words:
        consonant_count = sum(
            1 for char in word if char.isalpha() and char not in vowels
        )
        if consonant_count == n:
            result.append(word)
    return result