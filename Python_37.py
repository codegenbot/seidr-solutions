def sort_even(l: list):
    evens = sorted([x for x in l if 0 <= x % 2])
    odds = sorted([x for x in l if x % 2 != 0], reverse=True)
    result = []
    len_evens, len_odds = len(evens), len(odds)
    min_len = min(len_evens, len_odds)
    for i in range(min_len):
        result.append((evens[i], odds[i]))
    result += [(evens[j], None) for j in range(min_len, len_evens)] + \
               [(None, odds[k]) for k in range(min_len, len_odds)]
    return tuple(result)