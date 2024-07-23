```
def remove_duplicates(input_list):
    return [int(x) for x in set(map(int, input_list))]