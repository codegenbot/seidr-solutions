def get_score(bowls):
    score = 0
    for bowl in bowls:
        if bowl == "X":
            score += 10
        elif bowl == "/":
            score += 5
        else:
            score += int(bowl)
    return score

# Test cases
assert get_score("") == 0
assert get_score("XXXXXXXXXXXX") == 300
assert get_score("5/5/5/5/5/5/5/5/5/5/5") == 150
assert get_score("7115XXX548/279-X53") == 145
assert get_score("532/4362X179-41447/5") == 100