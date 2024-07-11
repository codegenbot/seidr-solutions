def count_appearances(input_string: str):
    dictionary = {}
    for char in input_string:
        if char in dictionary:
            dictionary[char] += 1
        else:
            dictionary[char] = 1
    return dictionary