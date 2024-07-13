def parse_music(s):
    s = s.lower()
    words = s.split()
    processed_words = [word.replace("-", " ") for word in words]
    output = ' '.join(processed_words)
    return output
print(parse_music("Hello o-o World!"))