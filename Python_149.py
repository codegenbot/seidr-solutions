```
def sorted_list_sum(lst):
    numbers = [int(c) for s in lst for c in s if c.isdigit()]
    result = []
    seen = set()
    for num in sorted(numbers):
        new_string = ''
        for string in lst:
            if int(string) == num and string not in seen:
                new_string = string
                seen.add(string)
                break
        result.append(new_string)
    return result