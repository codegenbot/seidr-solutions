def vowels_count(s):
    vowels = ["a", "e", "i", "o", "u"]
    count = 0
    for char in s:
        if char.lower() in vowels:
            count += 1
        elif char.lower() == "y" and char == s[-1]:
            count += 1
    return count