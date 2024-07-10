```
odds_index = 0
for i, x in enumerate(l):
    if i % 2 == 0:
        result.append(evens[even_index])
        even_index += 1
    else:
        result.append(odds[min(odds_index, (i-1)//2)])
        odds_index += 1