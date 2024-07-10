def bowling_score(game):
    score = 0
    roll = 0
    game_frames = [int(x) for x in game.split('/') if x.isdigit()]
    game_spare_strike = [x.replace('!', '').replace('X', '') for x in game.split('/')]
    
    for i, frame in enumerate(game_frames):
        if len(str(frame)) == 1:
            score += frame
            roll += 1
        elif len(str(frame)) == 2:
            first_roll, second_roll = map(int, str(frame))
            score += first_roll + second_roll
            roll += 1
        else:
            first_roll = frame
            if first_roll == 10: 
                score += first_roll
                roll += 1
                if i < len(game_frames) - 1 and game_spare_strike[i] != 'X':
                    score += game_frames[i + 1]
                    roll += 1
                elif i < len(game_frames) - 2:
                    score += sum(game_frames[i + 1:i + 3])
                    roll += 2
            else: 
                if i < len(game_frames) - 1:
                    score += first_roll + game_frames[i + 1]
                    roll += 2
    
    return score if roll == 10 else 100