def sorted_list_sum(lst):
    words = sorted([(len(word), len(word) % 2 != 0) for word in lst])
    odd_words = [parity[1] for _, parity in words if not parity]
    even_words = [parity[1] for _, parity in words if parity]
    return "".join([word[i] for word, _ in zip(even_words, range(len(even_words)))]) + "".join([word[i] for word, _ in zip(odd_words, range(len(odd_words)))])