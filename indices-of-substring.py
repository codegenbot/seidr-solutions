def get_indices(text, target):
    indices = []
    for i in range(len(text)):
        if text[i:].startswith(target):
            indices.append(i)
    return indices

assert get_indices("a", "a") == [0]
assert get_indices("!", "!") == [1, 0]
assert get_indices("r", "nm,xcnwqnd@#$fwkdjn3") == [0]
assert get_indices("hi", "hihihihihihihihihihi") == [0]
assert get_indices("#############", "#") == [12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]