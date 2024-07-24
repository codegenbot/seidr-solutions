def total_match(lst1, lst2):
    sum1 = sum(len(s) for s in lst1)
    sum2 = sum(len(s) for s in lst2)

    if sum1 < sum2:
        return lst1
    elif sum1 > sum2:
        return lst2
    else:
        total_length = sum1
        match_count = 0

        for word1, word2 in zip(lst1, lst2):
            if len(word1) == len(word2):
                match_count += 1
            total_length -= min(len(word1), len(word2))

        return (
            [word1 for word1, word2 in zip(lst1, lst2) if len(word1) != len(word2)]
            if match_count > 0
            else []
        )