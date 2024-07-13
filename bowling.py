def bowling_score(game):
    frames = game.split('/')
    total_score = 0
    frame_index = 0
    
    for i in range(1, len(frames) + 1):
        if len(frames[frame_index]) == 1: 
            total_score += 10
            frame_index += 1
        elif 'X' in frames[frame_index]:
            if i < 10 and frames[frame_index+1][0] != 'X':
                total_score += 10 + int(frames[frame_index+1].replace('X', '')) + int(frames[frame_index].replace('X', '', 1))
            else:
                total_score += 10
            frame_index += 2 if i < 10 else 1
        elif '-' in frames[frame_index]:
            first_roll, second_roll = map(int, frames[frame_index].split('-'))
            if first_roll == 10: 
                total_score += 10 + int(frames[frame_index+1].replace('X', '')) + int(frames[frame_index+2].replace('X', '', 1))
            else:
                total_score += first_roll + second_roll
            frame_index += 3 if i < 9 else 2
        else:
            first_roll, second_roll = map(int, frames[frame_index].split())
            if first_roll == 10: 
                total_score += 10 + int(frames[frame_index+1].replace('X', '')) + int(frames[frame_index+2].replace('X', '', 1))
            elif second_roll == 10:
                total_score += 10 + first_roll + second_roll
            else:
                total_score += first_roll + second_roll
            frame_index += 3 if i < 9 else 2
    
    return total_score

print(bowling_score("X1-1681357-0/XX7/4"))