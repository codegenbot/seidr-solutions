```
def bowling_game(score):
    total = 0
    for frame in range(10):
        if score[frame] == 'X':
            total += 30
        elif score[frame].startswith('\/'):
            a, b = map(int, score[frame][1:].split('/'))
            total += a + b
        else:
            a = int(score[frame])
            total += a
    return total