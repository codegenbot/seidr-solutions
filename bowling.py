def bowling_score(game):
    score = 0
    frame = 1
    for bowl in game.split(' '):
        if len(bowl) == 2 and bowl[1] == '/':
            strike_frame = int(frame)
            while True:
                next_bowl = input(f"Enter the bowls for frame {strike_frame}: ")
                if len(next_bowl) > 2 and next_bowl[1] == '/':
                    score += 10 + int(next_bowls.split(' ')[0])
                    strike_frame += 1
                elif next_bowl[1] == 'X':
                    score += 10 + (10 - int(next_bowl[0])) * 2
                    strike_frame += 1
                else:
                    score += int(next_bowl[:1]) * 2 + int(next_bowl[1:])
                    break
        elif bowl[0] == 'X':
            if len(bowl) > 1 and bowl[1] != '/':
                score += 10 + int(bowl[1])
            else:
                strike_frame = frame
                while True:
                    next_bowl = input(f"Enter the bowls for frame {strike_frame}: ")
                    if len(next_bowl) > 2 and next_bowl[1] == '/':
                        score += 10 + int(next_bowls.split(' ')[0])
                        break
                    elif next_bowl[1] == 'X':
                        score += 10 + (10 - int(next_bowl[0])) * 2
                        break
                    else:
                        score += int(next_bowl[:1]) * 2 + int(next_bowl[1:])
                        break
            frame += 1
        elif bowl == 'X X':
            score += 20
        elif bowl[1] == '/':
            if len(bowl) > 2 and bowl[2] != '/':
                score += int(bowl[:1]) * 2 + int(bowl[1:])
            else:
                strike_frame = frame
                while True:
                    next_bowl = input(f"Enter the bowls for frame {strike_frame}: ")
                    if len(next_bowl) > 2 and next_bowl[1] == '/':
                        score += 10 + int(next_bowls.split(' ')[0])
                        break
                    elif next_bowl[1] == 'X':
                        score += 10 + (10 - int(next_bowl[0])) * 2
                        break
                    else:
                        score += int(next_bowl[:1]) * 2 + int(next_bowl[1:])
                        break
            frame += 1
        elif bowl[0] == '/':
            if len(bowl) > 2 and bowl[2] != '/':
                score += int(bowl[:1]) * 2 + int(bowl[1:])
            else:
                strike_frame = frame
                while True:
                    next_bowl = input(f"Enter the bowls for frame {strike_frame}: ")
                    if len(next_bowl) > 2 and next_bowl[1] == '/':
                        score += 10 + int(next_bowls.split(' ')[0])
                        break
                    elif next_bowl[1] == 'X':
                        score += 10 + (10 - int(next_bowl[0])) * 2
                        break
                    else:
                        score += int(next_bowl[:1]) * 2 + int(next_bowl[1:])
                        break
            frame += 1
        else:
            if len(bowl) > 1 and bowl[0] == 'X':
                score += 10 + int(bowl[1:])
            elif len(bowl) > 1:
                score += int(bowl[:1]) * 2 + int(bowl[1:])
            else:
                score += int(bowl)
        frame += 1
    return score