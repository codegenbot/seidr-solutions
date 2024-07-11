def sorted_list_sum(lst):
    words = [(len(word), len(word) % 2 != 0) for word in lst]
    words.sort()
    even_words = [word for word, parity in words if not parity]
    odd_words = [word for word, parity in words if parity]
    return f"Sum of even-lengthed words: {sum(len(word) for word in even_words)}\n"
          f"Sum of odd-lengthed words: {sum(len(word) for word in odd_words)}"