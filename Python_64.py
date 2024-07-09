def vowels_count(s):
    vowels = set(["a", "e", "i", "o", "u"])
    if s[-1].lower() == "y":
        vowels.add("y")
    return sum(1 for char in s if char.lower() in vowels)