```
def sorted_list_sum(words=None):
    if words is None:
        lst = [word.strip().lower() for word in input("Enter words separated by spaces: ").split()]
    else:
        lst = [word.strip().lower() for word in words]
    
    even_length_words = [word for word in sorted(lst, key=len) if len(word) % 2 == 0]
    return sum(len(word) for word in even_length_words)