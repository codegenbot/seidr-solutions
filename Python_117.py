def select_words(s, n):
    def count_consonants(word):
        return sum(1 for letter in word if letter.lower() not in "aeiou")

    words = s.split()
    return [word for word in words if count_consonants(word) == n]