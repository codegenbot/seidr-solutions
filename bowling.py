[PYTHON]
def get_score(bowls: str) -> int:
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

def get_next_two_rolls(bowls: str, i: int) -> int:
    if i + 2 < len(bowls) and bowls[i + 1] == "X" and bowls[i + 2] != "/":
        return int(bowls[i + 1]) + int(bowls[i + 2])
    else:
        return 0

def get_next_roll(bowls: str, i: int) -> int:
    if i + 1 < len(bowls) and bowls[i + 1] != "/":
        return int(bowls[i + 1])
    else:
        return 0

def get_bonus_points(bowls: str, prev_roll: str, strike: bool, spare: bool) -> int:
    if strike and not spare:
        return 2 * int(prev_roll)
    elif spare and not strike:
        return 10 + get_next_roll(bowls, i)
    else:
        return 0
[/PYTHON]
[TESTS]
# Test case 1:
assert get_score("XXXXXXXXXXXX") == 300
# Test case 2:
assert get_score("9-9-9-9-9-9-9-9-9-9-") == 90
# Test case 3:
assert get_score("5/5/5/5/5/5/5/5/5/5/5") == 150
# Test case 4:
assert get_score("X XXXXXXXX X XXX") == 200
# Test case 5:
assert get_score("XXXXX XXXXX X XXX") == 170
[/TESTS]
