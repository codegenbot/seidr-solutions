def vowels_count(s):
    s = s.lower()
    return sum(
        1
        for char in s
        if char in "aeiou" or (char == "y" and s.index(char) == len(s) - 1)
    )