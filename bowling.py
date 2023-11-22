def calculate_bowling_score(bowls):
    score = 0
    frame = 1
    bowl_index = 0

    while frame <= 10:
        bowl = bowls[bowl_index]

        if bowl == 'X':
            score += 10
            if frame < 10:
                next_bowl = bowls[bowl_index + 1]
                next_next_bowl = bowls[bowl_index + 2]

                if next_bowl == 'X':
                    score += 10
                    if next_next_bowl == 'X':
                        score += 10
                    else:
                        score += int(next_next_bowl)
                elif next_bowl == '/':
                    score += 10
                else:
                    score += int(next_bowl)

                bowl_index += 1
            else:
                next_bowl = bowls[bowl_index + 1]
                next_next_bowl = bowls[bowl_index + 2]

                if next_bowl == 'X':
                    score += 10
                elif next_bowl == '/':
                    score += 10
                else:
                    score += int(next_bowl)

                if next_next_bowl == 'X':
                    score += 10
                elif next_next_bowl == '/':
                    score += 10
                else:
                    score += int(next_next_bowl)

                bowl_index += 1

        elif bowl == '/':
            score += 10 - int(bowls[bowl_index - 1])

            if frame < 10:
                next_bowl = bowls[bowl_index + 1]
                if next_bowl == 'X':
                    score += 10
                else:
                    score += int(next_bowl)

            bowl_index += 1

        else:
            score += int(bowl)

        bowl_index += 1
        frame += 1

    return score


bowls = input()
print(calculate_bowling_score(bowls))