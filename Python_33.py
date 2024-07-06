```
def sort_third(input_list):
    return [sorted(input_list[i:i+3]) for i in range(0, len(input_list), 3)] + ([input_list[-1]] if len(input_list) % 3 != 0 else [])