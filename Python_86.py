```
def anti_shuffle(s):
    return ' '.join(word.sort().__str__().replace('[', '').replace(']', '')) for word in s.split()```