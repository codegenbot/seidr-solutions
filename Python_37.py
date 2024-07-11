def sort_even(l: list):
    odds = [x for x in l if abs(x) % 2 != 0]
    evens = [x for x in l if abs(x) % 2 == 0]
    sorted_odds = sorted(odds)
    result = []
    while len(sorted_odds) > 0 and len(evens) > 0:
        result.append(sorted_odds.pop(0))
        result.append(evens.pop(0))
    result.extend(evens)
    return tuple(result)