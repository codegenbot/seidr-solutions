```
def sort_third(lst):
    lst.sort(key=lambda x: (x[2], x))
    return lst

def check():
    pass  # implement your logic here