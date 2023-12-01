def calculate_score(bowls):
    score = 0
    frame = 1
    frame_score = 0
    frame_count = 0
    prev_bowl = ''
  
    for bowl in bowls:
        if bowl == 'X':
            score += 10
            frame_score = 10
            if frame_count < 9:
                if prev_bowl == 'X':
                    score += 10
                elif prev_bowl == '/':
                    score += 10
            frame_count += 1
            if frame_count == 10:
                break
            prev_bowl = 'X'
        elif bowl == '/':
            score += 10 - frame_score
            frame_score = 10
            if frame_count < 9:
                if prev_bowl == 'X':
                    score += 10
            frame_count += 1
            if frame_count == 10:
                break
            prev_bowl = '/'
        elif bowl == '-':
            frame_score = 0
            prev_bowl = '-'
        else:
            score += int(bowl)
            frame_score += int(bowl)
            if frame_score == 10:
                score += 10
                if frame_count < 9:
                    if prev_bowl == 'X':
                        score += 10
                frame_count += 1
                if frame_count == 10:
                    break
            prev_bowl = bowl
  
    return score

bowls = input()
print(calculate_score(bowls))