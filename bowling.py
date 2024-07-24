```
def bowling_score(frames):
    score = 0
    for i, frame in enumerate(frames.split('/')):
        if len(frame) == 1:
            score += 10 + (10 - int(frame)) * 2 if i > 0 else 30
        elif len(frame) == 2:
            a, b = map(int, frame)
            if a == 10:  # strike
                score += 10 + (b + next_frames.get(i+1, 0)[0] or 0) * 2
            else:  # spare
                score += 10 + b
        else:
            a, b = map(int, frame)
            if i == 9 and a != 10:
                score += a + b + next_frames.get(i+1, [0])[0]
            else:
                score += a + b
    return score

next_frames = collections.defaultdict(list)

def get_input():
    while True:
        try:
            frames = input("Enter the bowling frames (e.g., 10/10/.../): ")
            if len(frames) > 20: 
                break
        except ValueError:
            print("Invalid input. Please enter a valid sequence of numbers and '/'.")

frames = get_input()
print(bowling_score(frames))