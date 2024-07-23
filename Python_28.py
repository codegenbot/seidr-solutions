def find_most_frequent_letter(text: str) -> str:
    if not text:
        return ""

    frequency = {}
    for char in text.lower():
        if char.isalpha():
            if char in frequency:
                frequency[char] += 1
            else:
                frequency[char] = 1

    most_frequent_char = max(frequency, key=frequency.get)
    return most_frequent_char