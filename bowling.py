    def bowling_score(game):
        score = 0
        roll = 0
        for frame in game.split('/'):
            if len(frame) == 1:
                score += int(frame)
                roll += 1
            elif len(frame) == 2:
                score += int(frame[0]) * 2 + min(int(frame[0]), 10)
                roll += 1
            else:
                first_roll = int(frame[0])
                if first_roll == 10:
                    score += 10 + 10
                    roll += 1
                else:
                    score += first_roll + int(game.split('/')[game.split('/').index(frame) + 1].split()[0])
                    roll += 2
        return score