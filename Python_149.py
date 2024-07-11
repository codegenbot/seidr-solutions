def sorted_list_sum(lst):
    word_len = [(len(str(word)), word) for word in lst]
    word_len.sort()
    return [str(word) for _, word in word_len]