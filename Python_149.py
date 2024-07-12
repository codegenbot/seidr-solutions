```
def sorted_list_sum(lst):
    digits = [int(word) for word in lst if word.isdigit()]
    return [" ".join(map(str, sorted(digits)))]