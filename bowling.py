```
def bowling_score(games):
    score = 0
    game = ''
    for char in games:
        if char.isdigit():
            game += char
        else:
            if len(game) == 1:
                score += int(game)
            elif len(game) > 1:
                if '-' in game or 'X' in game:
                    score += calculate_spare_or_strike(int(game))
                else:
                    score += sum(map(int, game))
            game = ''
    if len(game) > 0:
        if '-' in game or 'X' in game:
            score += calculate_spare_or_strike(int(game))
        else:
            score += sum(map(int, game))
    return score

def calculate_spare_or_strike(rolls):
    total = rolls
    if total == 10:
        return total + calculate_spare_or_strike([0]+[1]*9)
    elif 'X' in str(rolls):
        return total + 10 + calculate_spare_or_strike([0]+[1]*8)
    else:
        return total

print(bowling_score("0")) 
print(bowling_score("XXXXXXXXXXXX"))
print(bowling_score("5/5/5/5/5/5/5/5/5/5/5"))
print(bowling_score("7115XXX548/279-X53"))
print(bowling_score("532/4362X179-41447/5"))