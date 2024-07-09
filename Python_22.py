def find_pairs_sum_to_k(pairs: List[tuple], k: int) -> List[List]:
    result = []
    for i in range(len(pairs)):
        for j in range(i + 1, len(pairs)):
            if pairs[i][0] + pairs[j][0] == k:
                result.append([pairs[i], pairs[j]])
    return result