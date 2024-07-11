def find_first_non_repeating_character(s):
    for char in s:
        if s.count(char) == 1:
            return char
    return None