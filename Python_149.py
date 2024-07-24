```
def sorted_list_sum(input_data):
    word_dict = {
        "zero": 0,
        "one": 1,
        "two": 2,
        "three": 3,
        "four": 4,
        "five": 5,
        "six": 6,
        "seven": 7,
        "eight": 8,
        "nine": 9,
    }
    nums = sorted(
        [
            (str(word_dict[word]) if word in word_dict else word, index)
            for index, word in enumerate(input_data)
        ]
    )

    return [num for num, _ in nums]