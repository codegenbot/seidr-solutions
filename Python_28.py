def count_vowels(text: str) -> int:
    vowels = "aeiouAEIOU"
    text = text.lower()
    count = sum(1 for char in text if char in vowels)
    return count