def search(s):
    char_freq_dict = {}
    for char in s:
        if char in char_freq_dict:
            char_freq_dict[char] += 1
        else:
            char_freq_dict[char] = 1
    max_char = ""
    max_count = -1
    for char, freq in char_freq_dict.items():
        if freq > max_count:
            max_char = char
            max_count = freq
    return max_char