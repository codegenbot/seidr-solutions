```
def sorted_list_sum(lst):
    words = [(len(word), len(word) % 2 != 0) for word in lst]
    words.sort()
    even_words = [word for word, parity in words if not parity]
    odd_words = [word for word, parity in words if parity]
    return "".join([even_word[i] for even_word, _ in zip(even_words, range(len(even_words)))] + 
                   ["", "".join([odd_word[i] for odd_word, _ in zip(odd_words, range(len(odd_words)))]), ""])