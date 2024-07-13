```
def parse_music(s):
    s = s.lower()
    words = s.replace("|", " ").split()
    word_counts = {}
    for word in set(words):
        if word not in ["", " ", "|"]:
            if word in word_counts:
                word_counts[word] += 1
            else:
                word_counts[word] = 1
    return list(word_counts.values())

print(parse_music("o| .| o| .| o o| o o|"))