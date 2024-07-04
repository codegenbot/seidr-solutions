def select_words(s, n):
    vowels = set("aeiouAEIOU")

    def consonant_count(word):
        return sum(1 for char in word if char.isalpha() and char not in vowels)

    words = s.split()
    return [word for word in words if consonant_count(word) == n]