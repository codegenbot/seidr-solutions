```python
def bowling_score(game):
    game_list = game.split(' ')
    frames = [0] * 10
    for i, roll in enumerate(game_list):
        if len(roll) == 2 and roll[1] == '/':
            frames[i//2] += int(roll[0]) + 10
        elif roll == 'X':
            frames[i//2] = 10
            if i < len(game_list) - 1:
                next_roll = game_list[i+1]
                if len(next_roll) > 1 and next_roll[1] == '/':
                    frames[i//2] += int(next_roll[0]) + 10
        elif roll[0] == 'X' and i < len(game_list) - 1:
            frames[i//2] = 10
            if game_list[i+1].isdigit():
                frames[i//2] += int(game_list[i+1])
        else:
            if i % 2 == 0:
                frames[i//2] += int(roll)
            elif i < len(game_list) - 1 and game_list[i].isdigit():
                frames[i//2] += int(game_list[i-1]) + int(game_list[i])
    return sum(frames)

print(bowling_score('9/-39/X3/7/54622325'))