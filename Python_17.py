```
def process_music(s):
    s = s.lower()
    words = s.split()
    processed_words = [word.replace("-", " ").replace("o", "oh") for word in words]
    output = ' '.join(processed_words)
    return output
print(process_music("Hello o-o World!"))