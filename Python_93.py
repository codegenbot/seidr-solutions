def reverse_words_order_and_swap_cases(sentence):
    words = sentence.split()
    reversed_words = words[::-1]
    swapped_cases = [word.swapcase() for word in reversed_words]
    result = " ".join(swapped_cases)
    return result