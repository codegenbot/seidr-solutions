```
def sorted_list_sum(input_data):
    word_dict = {}
    for word in input_data:
        if word not in word_dict:
            word_dict[word] = 0
        word_dict[word] += 1

    nums = sorted(word_dict.items(), key=lambda x: (-x[1], len(x[0])))
    return [num[0] for num in nums]