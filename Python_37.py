while i < len(evens) and j < len(odds):
    if -abs(odds[j]) >= evens[i]:
        result.append(evens[i])
        i += 1
    else:
        result.append(odds[j])
        j += 1