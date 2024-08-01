def split_words(txt):
    return txt.split() if ' ' in txt else (txt.replace(',', ' ').split() if ',' in txt else sum(1 for char in txt.lower() if ord(char) % 2 != 0))