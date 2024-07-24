def sort_even(l: list):
    evens = sorted([x for x in l if 0 <= x % 2], key=lambda x: abs(x))
    odds = [x for x in l if abs(x) % 2 != 0]
    odds.sort(reverse=True)
    result = []
    for x in l:
        if 0 <= x % 2:
            result.append(next((y for y in evens if abs(y) == abs(x)), None))
            evens.remove(result[-1])
        else:
            result.append(next((y for y in odds if abs(y) == abs(x)), None))
            odds.remove(result[-1])
    return tuple(result)