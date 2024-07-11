def get_strike_bonus(bowls, index):
    bonus = 0
    if bowls[index] == "X":
        next_frame_index = index + 1
        for i in range(2):
            if bowls[next_frame_index] == "X":
                bonus += 10
            elif bowls[next_frame_index] == "/":
                bonus += 10 - int(bowls[next_frame_index-1])
            else:
                bonus += int(bowls[next_frame_index])
            next_frame_index += 1
    return bonus

def calculate_bowling_score(bowls):
    score = 0
    index = 0

    while index < len(bowls):
        frame_score = (
            10
            if bowls[index] == "X"
            else int(bowls[index]) if bowls[index].isdigit() else 0
        )
        score += frame_score + get_strike_bonus(bowls, index)
        index += 1 if bowls[index] != "X" else 1

    return score

print(calculate_bowling_score("32XX7/534/X-66-1-"))