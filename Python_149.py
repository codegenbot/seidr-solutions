```
def sorted_list_sum(lst):
    words = sorted([(len(word), len(word) % 2 != 0) for word in lst])
    odd_words = [word for length, parity in words if not parity]
    even_words = [word for length, parity in words if parity]
    return "".join([word[i] for word, _ in zip(even_words, range(len(even_words)))]) + "".join([word[i] for word, _ in zip(odd_words, range(len(odd_words)))])