```
def sort_third(lst):
    result = []
    prev_non_multiple_of_three = None
    for i, num in enumerate(lst):
        if num % 3 == 0:
            while prev_non_multiple_of_three is None or prev_non_multiple_of_three % 3 != 0:
                prev_non_multiple_of_three = next((x for x in lst[:i] if x % 3 != 0), None)
            result.append(prev_non_multiple_of_three)
            prev_non_multiple_of_three = None
        else:
            result.append(num)
    return tuple(result)