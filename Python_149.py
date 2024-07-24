def sorted_list_sum(input_data):
    word_dict = {}
    for word in input_data:
        if word not in word_dict:
            word_dict[word] = len(word)
        else:
            word_dict[word] = len(word)

    nums = sorted(word_dict.items(), key=lambda x: (-x[1], x[0]))
    return [num[1] for num in nums]