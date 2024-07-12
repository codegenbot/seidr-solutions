def sort_even_odd():
    evens = sorted([i for i in input().split() if int(i) % 2 == 0])
    odds = sorted(
        [i for i in input().split() if int(i) % 2 != 0], key=lambda x: -int(x)
    )
    return sorted(evens + odds)