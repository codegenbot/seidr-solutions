def find_max_score(lst):
    max_score = 0
    current_score = 0
    for s in lst:
        for c in s:
            if c == 'O':
                current_score += 1
            elif c == 'X':
                if current_score > 0:
                    current_score -= 1
                else:
                    return -1
        max_score = max(max_score, current_score)
    return max_score