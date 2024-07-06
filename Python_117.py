
def select_words(s, n):
    return [word for word in s.split() if len([c for c in word if c.isalpha() and not c.isdigit()]) == n]


# Test case 1:
assert select_words("The quick brown fox jumps over the lazy dog.", 2) == ["quick", "brown", "lazy"]

# Test case 2:
assert select_words("Python is a popular programming language.", 3) == ["is", "a", "popular", "programming"]