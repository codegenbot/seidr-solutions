def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:i+len(target)] == target:
            indices.append(i)
    return indices

# test cases
assert get_indices("a", "a") == [0]
assert get_indices("!", "!") == [1, 0]
assert get_indices("r", "nm,xcnwqnd@#$fwkdjn3") == [0]
assert get_indices("hi", "hihihihihihihihihihi") == [0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
assert get_indices("#############", "#") == [12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]