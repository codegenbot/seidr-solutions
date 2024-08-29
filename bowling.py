```
def bowling_score(gutter_ball=False):
    frames = []
    for frame in range(1, 11):
        roll = input(f"Enter score for frame {frame} (/, -X or numbers): ")
        if roll[0] == '/':
            if roll[1:].isdigit():
                if len(roll) > 2 and roll[2] != '-':
                    gutter_ball = True
                    frames.append([0, int(roll[1:])])
                else:
                    if '/' in roll:
                        first_roll = int(roll.split('/')[0])
                        second_roll = int(roll.split('/')[1].split('-')[0]) if '-' in roll else 10
                        frames.append([first_roll, second_roll])
                    else:
                        gutter_ball = True
                        frames.append([0, int(roll[1:])])
            else:
                frames.append([-X])
        elif roll[0] == '-':
            first_roll = int(roll.split('-')[0])
            if '/' in roll:
                second_roll = int(roll.split('/')[1].split('-')[0]) if '-' in roll else 10
            else:
                second_roll = 10
            frames.append([first_roll, second_roll])
        else:
            if '/X' in roll or 'X/' in roll:
                gutter_ball = True
                frames.append([-X])
            elif '/-' in roll or '-/' in roll:
                first_roll = int(roll.split('-')[0].split('/')[0])
                second_roll = 10
                frames.append([first_roll, second_roll])
            else:
                rolls = [int(x) for x in re.findall(r'\d+', roll)]
                if len(rolls) > 1 and sum(rolls) > 10:
                    gutter_ball = True
                    frames.append([-X])
                elif len(rolls) == 2 and sum(rolls) <= 10:
                    frames.append([rolls[0], rolls[1]])
                else:
                    if '/' in roll or '-' in roll:
                        if '/' in roll:
                            first_roll = int(roll.split('/')[0])
                            second_roll = int(roll.split('/')[1].split('-')[0]) if '-' in roll else 10
                        else:
                            first_roll = 10
                            second_roll = 10
                        frames.append([first_roll, second_roll])
                    else:
                        gutter_ball = True
                        frames.append([-X])

    total_score = sum(sum(frame) for frame in frames)
    return total_score if not gutter_ball else "Invalid score"