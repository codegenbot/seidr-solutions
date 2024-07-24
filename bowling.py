def handle_bonus(bowls, score):
    def get_strike_bonus(bowls, frame):
        bonus = 10
        if frame < len(bowls) - 1:
            next_bowl = bowls[frame + 1]
            if next_bowl.isdigit():
                bonus += int(next_bowl)
            elif next_bowl == "/":
                bonus += 10
            elif next_bowl == "X":
                bonus += 10
                if frame < len(bowls) - 2:
                    if bowls[frame + 2].isdigit():
                        bonus += int(bowls[frame + 2])
                    elif bowls[frame + 2] == "/":
                        bonus += 10
                    elif bowls[frame + 2] == "X":
                        bonus += 10
        return bonus
    
    bonus = sum(map(lambda x: 10 if x == "X" else 0, bowls[11:]))
    if bowls[9] == "X" or bowls[9] == "10":
        bonus += get_strike_bonus(bowls, 9)
    score += bonus
    for i in range(0, len(bowls) - 1):
        if bowls[i] == "/":
            score += 10 - int(bowls[i - 1]) if bowls[i - 1].isdigit() else 0
    return score

# Example usage
bowls = input()
print(handle_bonus(bowls, 0))