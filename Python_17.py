Here is the corrected code:

def parse_music(s):
    s = s.lower()
    words = s.replace("|", " ").split()
    word_counts = {}
    for word in words:
        if word in word_counts:
            word_counts[word] += 1
        else:
            word_counts[word] = 1
    return [word_counts[word] for word in set(words)]
print(parse_music("o| .| o| .| o o| o o|"))