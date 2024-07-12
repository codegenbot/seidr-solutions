"""
def calculate_score(frames):
    score = 0
    for i in range(0, len(frames), 2):
        frame_roll = list(map(int, frames[i:i+2].replace('/', '')))
        
        if 'X' in str(frame_roll): 
            score += 10 + (10 if i < 9 else max(frame_roll))
        elif '/' in str(frame_roll): 
            strike_points = [int(x) for x in str(frame_roll).split('/')]
            score += 10 + sum(strike_points)
        else: 
            score += sum(frame_roll) + (i < 9 and 1 or 0)
    
    return score

frames = input("Enter the frames string: ")
print(calculate_score(frames))