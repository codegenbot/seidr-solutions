def sorted_list_sum(lst):
    digit_words = [word for word in lst if word.isdigit()]
    return [' '.join(sorted(digit_words)), str(sum(int(word) for word in digit_words))]