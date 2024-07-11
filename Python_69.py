```
def search(lst):
    return max(set(lst), key=lst.count)