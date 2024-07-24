```
def sorted_list_sum(words=None):
    if words is None:
        lst = [word.strip().lower() for word in input("Enter words separated by spaces: ").split()]
    else:
        lst = [word.strip().lower() for word in words]
    
    return sum(len(word) for word in lst if len(word) % 2 == 0)