```
def calculate_score(frames):
    score = 0
    current_frame = []
    for char in frames:
        if char.isdigit() or char == 'X':
            current_frame.append(int(char) if char.isdigit() else 10)
        elif char == '-':
            continue
        elif char == '/':
            next_frame = [int(x) for x in str(frames[frames.index(char)+1:]).replace('--', '')]
            if sum(current_frame) + min(next_frame) <= 10:
                score += sum(current_frame) + min(next_frame)
            else:
                score += 10 + max(next_frame)
            current_frame = []
    while len(current_frame) > 0 and '/' not in str(current_frame):
        score += sum(current_frame)
        current_frame = []
    return score

frames = input("Enter the frames string: ")
print(calculate_score(frames))