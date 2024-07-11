```
def histogram(test):
    count_dict = {}
    for word in test.split():
        if word:
            if word in count_dict:
                count_dict[word] += 1
            else:
                count_dict[word] = 1
    max_count = max(count_dict.values())
    result_dict = {k: v for k, v in count_dict.items() if v == max_count}
    return result_dict