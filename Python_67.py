```
def fruit_distribution(s, n):
    words = s.split()
    apple_count = sum(int(word) for word in words if word.isdigit() and "apples" in " ".join(words))
    orange_count = sum(int(word) for word in words if word.isdigit() and "oranges" in " ".join(words))
    return max(0, n - apple_count - orange_count)