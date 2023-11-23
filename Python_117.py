def select_words(s, n):
    return [word for word in s.split() if sum(1 for letter in word if letter.lower() not in 'aeiou') == n]