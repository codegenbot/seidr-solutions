[PYTHON]
def get_score(bowls):
    score = 0
    strike = False
    spare = False
    prev_roll = None

    for i, roll in enumerate(bowls):
        if roll == "X":
            score += 10 + get_next_two_rolls(bowls, i)
            strike = True
        elif roll == "/":
            score += 10 + get_next_roll(bowls, i)
            spare = True
        else:
            score += int(roll)

        if strike or spare:
            score += get_bonus_points(bowls, prev_roll, strike, spare)
            strike = False
            spare = False
            prev_roll = None
        else:
            prev_roll = roll

    return score

def get_next_two_rolls(bowls, i):
    if i + 2 < len(bowls) and bowls[i + 1] == "X" and bowls[i + 2] != "/":
        return int(bowls[i + 1]) + int(bowls[i + 2])
    else:
        return 0

def get_next_roll(bowls, i):
    if i + 1 < len(bowls) and bowls[i + 1] != "/":
        return int(bowls[i + 1])
    else:
        return 0

def get_bonus_points(bowls, prev_roll, strike, spare):
    if strike and not spare:
        return 2 * int(prev_roll)
    elif spare and not strike:
        return 10 + get_next_roll(bowls, i)
    else:
        return 0
[/PYTHON]
[TESTS]
# Test case 1:
bowls = "X|X|X|X|X|X|X|X|X|X||"
assert get_score(bowls) == 90
# Test case 2:
bowls = "9-|9-|9-|9-|9-|9-|9-|9-|9-|9-||"
assert get_score(bowls) == 90
# Test case 3:
bowls = "5/|5/|5/|5/|5/|5/|5/|5/|5/|5/||"
assert get_score(bowls) == 90
# Test case 4:
bowls = "X|7/|9-|X|8/|8/|X|X|X||"
assert get_score(bowls) == 167
[/TESTS]
