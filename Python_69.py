```
from collections import Counter

def search(lst):
    counter = Counter(lst)
    most_common = counter.most_common(1)[0]
    if most_common[1] > 1:
        return max(set(lst), key=lst.count)
    else:
        return -1