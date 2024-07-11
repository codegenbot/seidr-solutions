def select_words(s, n):
    words = s.split()
    result = []
    for word in words:
        count = sum(1 for char in word if char.lower() not in "aeiou")
        if count == n:
            result.append(word)
    return result