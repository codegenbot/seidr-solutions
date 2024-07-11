```
def sorted_list_sum(lst):
    words = sorted([(len(word), len(word) % 2 != 0) for word in lst])
    even_words = [word for length, parity in words if not parity]
    odd_words = [word for length, parity in words if parity]
    return "".join([word[1] for length, word in sorted(zip(*words))]).upper()