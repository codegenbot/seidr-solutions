def bowling_score(games):
    score = 0
    game_count = 0
    current_frame = []
    
    for i in range(0, len(games), 2):
        if games[i] == 'X':
            current_frame.append('X')
            score += 30
        elif games[i].isdigit():
            strike_count = int(games[i])
            score += strike_count * 10
            game_count += 1
            if game_count < 9:
                current_frame.append(str(strike_count))
        else:
            current_frame.append('/'.join(map(str, list(map(int, [games[i], games[i+1]]))))))
            
    for i in range(len(current_frame)):
        if current_frame[i] == 'X':
            score += 10
            if game_count < 9:
                frame = list(map(int, current_frame[:i+1]))
                if sum(frame) >= 10:
                    score += (10 - sum(frame))
                else:
                    score += sum(frame)
        elif current_frame[i].isdigit():
            frame = list(map(int, current_frame[:i+1]))
            if sum(frame) < 10:
                if game_count == 8 and sum(frame) > 7:
                    score -= (sum(frame) - 7)
                else:
                    score += sum(frame)
        else:
            frame = list(map(int, current_frame[:i].split('/')))
            score += sum(frame)
            
    return score