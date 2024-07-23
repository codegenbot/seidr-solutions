def search(lst):
    frequency_dict = {}
    for num in lst:
        if num > 0:
            if num in frequency_dict:
                frequency_dict[num] += 1
            else:
                frequency_dict[num] = 1
    max_frequency = -1
    for k, v in frequency_dict.items():
        if v >= k and v > max_frequency:
            max_frequency = v
    return (
        -1
        if max_frequency == -1
        else list(frequency_dict.keys())[
            list(frequency_dict.values()).index(max_frequency)
        ]
    )