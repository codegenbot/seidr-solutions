def sort_even(l: list):
    evens = sorted([x for x in l if x % 2 == 0])
    odds = [x for x in l if x % 2 != 0]
    return [evens[i] if i < len(evens) else odds[i - len(evens)] for i in range(len(l))]