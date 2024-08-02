```
def split_words(txt):
    return txt.split() if ' ' in txt else (txt.split(',') if ',' in txt else sum(1 for i in range(ord('a'), ord('z')+1) if txt[i%26].islower()))