def bowling_score(bowls):
    score = 0
    bowl_index = 0
    for frame in range(1, 11):
        if bowls[bowl_index] == "X":
            score += 10
            score += sum(
                map(int, bowls[bowl_index + 1 : bowl_index + 3].replace("/", "X"))
            )
            bowl_index += 1
        elif bowls[bowl_index + 1] == "/":
            score += 10
            score += int(bowls[bowl_index + 2])
            bowl_index += 2
        else:
            current_frame = bowls[bowl_index] if bowls[bowl_index] != "-" else "0"
            next_frame = bowls[bowl_index + 1] if bowls[bowl_index + 1] != "-" else "0"
            score += int(current_frame) + int(next_frame)
            if current_frame == "X" or next_frame == "/":
                score += int(bowls[bowl_index + 2])
            bowl_index += 2
    return score


bowls = input()
print(bowling_score(bowls))