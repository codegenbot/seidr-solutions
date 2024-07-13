```
def sorted_list_sum(lst):
    result = []
    for item in lst:
        if isinstance(item, str) and item.isalpha():
            result.append(str(sorted([char for char in item if not char.isdigit()])))
        elif isinstance(item, int):
            result.append(str(item))
    return [str(digit) for digit in sorted(int(''.join(result)))]