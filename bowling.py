    def calculate_score(games):
        frames = games.replace('/', '')
        current_roll = 0
        score = 0
        
        for i in range(len(frames)):
            if frames[i].isdigit():
                if len(frames) - i >= 2 and frames[i:i+2] == '10':
                    score += 10
                    current_roll = 0
                    i += 1
                else:
                    current_roll = int(frames[i]) * 10
            else:
                score += current_roll
                current_roll = 0
        
        return score