def vowels_count(s):
    s = s.lower()
    count = 0
    for char in s:
        if char in "aeiou" or (char == "y" and s[-1] == "y"):
            count += 1
    return count