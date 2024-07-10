```
def find_max_score(lst):
    max_score = 0
    current_score = 0
    match_parens = 0
    for s in lst:
        check = False
        for c in s:
            if c == 'O':
                current_score += 1
                match_parens = (current_score > 0) - 1
                if match_parens > 0 and not check: 
                    check = True
            elif c == 'X' and check:
                current_score -= 1
                match_parens -= 1
                if match_parens == 0:
                    check = False
        max_score = max(max_score, current_score)
    return max_score