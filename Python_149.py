```
def sorted_list_sum(input_data):
    word_dict = {'zero': 0, 'one': 1, 'two': 2, 'three': 3, 'four': 4, 
                 'five': 5, 'six': 6, 'seven': 7, 'eight': 8, 'nine': 9}
    nums = sorted([(word_dict.get(word), index) for index, word in enumerate(input_data) if word in word_dict], key=lambda x: x[1])
    
    return ''.join([num[0] * num[1] for num in nums])