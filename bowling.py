```
def calculate_score(games):
    score = 0
    games_list = games.split('/')

    for i in range(0, len(games_list)):
        if games_list[i] == 'X':
            score += 10
            if i < 9:
                score += int(calculate_score(''.join(games_list[i+1:])))
        elif games_list[i] == '-':
            score += 10 - int(games_list[i-1])
            if i < 9:
                score += int(calculate_score(''.join(games_list[i+2:])))
        else:
            score += sum(int(x) for x in games_list[i].split())

    return score

print(calculate_score("364/5339/-7/X71"))