```Python
def get_score_frame(game, i):
    if game[i] == 'X':
        return 10 + (10 - int(game[i+1])) if i < 17 else 10
    elif game[i] == '/':
        return 10 - int(game[i+1]) + (10 - int(game[i-1])) if i > 0 and i < 17 else 10
    else:
        return int(game[i:i+2])

def bowling_score(game):
    score = 0
    for i in range(0, len(game), 2):
        score += get_score_frame(game, i)
    return score

print(bowling_score(input("Enter the game: ")))